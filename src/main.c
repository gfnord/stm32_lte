#include <device.h>
#include <gpio.h>
#include <misc/printk.h>
#include <uart.h>
#include <zephyr.h>

#define SYS_LOG_DOMAIN "UART_DRIVER"
#include <logging/sys_log.h>

#define MODEM_UART "UART_1"
// #define UART_BUFFER_SIZE 128

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
        SYS_LOG_ERR("retval should always be 1");
        return;
    }
    /* Verify uart_irq_rx_ready() */
    if (uart_irq_rx_ready(dev)) {
        /* Verify uart_fifo_read() */
        uart_fifo_read(dev, &recv_data, 1);
        // if (__uart_callback) {
        //     __uart_callback(recv_data);
        // }
        printk("%c", recv_data);
    }
}

u8_t ay_uart_driver_open()
{
    modem_dev = device_get_binding(MODEM_UART);
    if (!modem_dev) {
        SYS_LOG_ERR("Problem to load uart device");
        printk("Problem to load uart device\n");
        return 1;
    }
    /* Verify uart_irq_callback_set() */
    uart_irq_callback_set(modem_dev, uart_fifo_callback);
    /* Enable Tx/Rx interrupt before using fifo */
    /* Verify uart_irq_rx_enable() */
    uart_irq_rx_enable(modem_dev);
    SYS_LOG_INF("UART device loaded.");
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
    /*k_sleep(300);
    for (i = 0; i < UART_BUFFER_SIZE; i++) {
            uart_poll_in(modem_dev, &recvChar);
            printk("%c", recvChar);
    }*/
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
}
