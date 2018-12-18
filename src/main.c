#include <device.h>
#include <gpio.h>
#include <misc/printk.h>
#include <uart.h>
#include <zephyr.h>

#define MODEM_UART "UART_1"

// Define the queue 
extern struct k_msgq modem_queue;
K_MSGQ_DEFINE(modem_queue, sizeof(u8_t), 256, 1);

static void (*__uart_callback)(u8_t) = 0;
struct device *modem_dev             = 0;

void ay_uart_driver_set_callback(void (*callback)(u8_t))
{
    __uart_callback = callback;
}

static void uart_fifo_callback(struct device *dev)
{
    u8_t recv_data;
    /* Verify uart_irq_update() */
    if (!uart_irq_update(dev)) {
        printk("Error: retval should always be 1");
        return;
    }
    /* Verify uart_irq_rx_ready() */
    if (uart_irq_rx_ready(dev)) {
        /* Verify uart_fifo_read() */
        uart_fifo_read(dev, &recv_data, 1);
        // if (__uart_callback) {
        //     __uart_callback(recv_data);
        // }
        //printk("%c", recv_data);
	k_msgq_put(&modem_queue, &recv_data, K_NO_WAIT);
    }
}

u8_t ay_uart_driver_open()
{
    modem_dev = device_get_binding(MODEM_UART);
    if (!modem_dev) {
        printk("Error: Problem to load uart device\n");
        return 1;
    }
    /* Verify uart_irq_callback_set() */
    uart_irq_callback_set(modem_dev, uart_fifo_callback);
    /* Enable Tx/Rx interrupt before using fifo */
    /* Verify uart_irq_rx_enable() */
    uart_irq_rx_enable(modem_dev);
    printk("UART device loaded.\n");
    return 0;
}

void ay_uart_driver_write(char *data)
{
    u8_t i;
    u8_t temp;
    // unsigned char recvChar;
    for (i = 0; i < strlen(data); i++) {
        temp = data[i];
        uart_poll_out(modem_dev, temp);
    }
}

void consumer_modem_queue(void)
{
	u8_t recv_data;
	u8_t number_of_messages;
	u8_t i;
	u8_t full_message[512];
	number_of_messages = k_msgq_num_used_get(&modem_queue);
	if (number_of_messages > 0) {
		printk("%d - Consuming %d items from queue.\n", k_uptime_get_32(), number_of_messages);
		for ( i = 0; i < number_of_messages; i++) {
       			k_msgq_get(&modem_queue, &recv_data, K_FOREVER);
			//printk("  - Item %d from queue: %c\n", i, recv_data);
			full_message[i] = recv_data;
		}
		full_message[number_of_messages] = '\0';
		printk("%s\n", full_message);
	} else {
		printk("%d - Queue empty.\n", k_uptime_get_32());
	}
}

void main(void)
{
    printk("stm32_lte project\n");
    u8_t status;
    status = ay_uart_driver_open();
    if (status == 0) {
        printk("Sending AT to UART...\n");
        ay_uart_driver_write("AT\r\n\r\n");
	printk("\n");
    }
    while(1) {
    // Read the modem queue
    consumer_modem_queue();
    k_sleep(10000);
    }

}
