#include <zephyr.h>
#include <device.h>
#include <gpio.h>
#include <uart.h>
#include <misc/printk.h>
#include <logging/sys_log.h>

#define SYS_LOG_DOMAIN "UART_DRIVER"
#define modem_UART "UART_1"
#define UART_BUFFER_SIZE 128

static void (*__uart_callback)(u8_t) = 0;

void ay_uart_driver_set_callback(void (*callback)(u8_t)) {
	__uart_callback = callback;
}

static void uart_fifo_callback(struct device *dev) {
	u8_t recvData;
	/* Verify uart_irq_update() */
	if (!uart_irq_update(dev)) {
		SYS_LOG_ERR("retval should always be 1");
	return;
	}
	/* Verify uart_irq_rx_ready() */
	if (uart_irq_rx_ready(dev)) {
		/* Verify uart_fifo_read() */
		uart_fifo_read(dev, &recvData, 1);
		if (__uart_callback) {
			__uart_callback(recvData);
		}
	}
}

u8_t ay_uart_driver_open() {
	struct device *uart_dev = device_get_binding(modem_UART);
	if (!uart_dev) {
		SYS_LOG_ERR("Problem to load uart device");
		printk("Problem to load uart device\n");
		return 1;
	}
	/* Verify uart_irq_callback_set() */
	uart_irq_callback_set(uart_dev, uart_fifo_callback);
	/* Enable Tx/Rx interrupt before using fifo */
	/* Verify uart_irq_rx_enable() */
	uart_irq_rx_enable(uart_dev);
	SYS_LOG_INF("UART device loaded...[OK]");
	printk("UART device loaded...[OK]\n");
	return 0;
}

void ay_uart_driver_write(char *szStr) {
	struct device *uart_dev = device_get_binding(modem_UART);
	u8_t i;
    	unsigned char temp;
	unsigned char recvChar;
    	for (i = 0; i < strlen(szStr); i++) {
        	temp = szStr[i];
        	uart_poll_out(uart_dev, temp);
    	}
	k_sleep(300);
	for (i = 0; i < UART_BUFFER_SIZE; i++) {
        	uart_poll_in(uart_dev, &recvChar);
                printk("%c", recvChar);
        }
}

void main(void) {
	u8_t status;
	// Open UART
    	status = ay_uart_driver_open();
	if ( status == 0 ) {
			printk("Sending AT to UART\n");
    			ay_uart_driver_write("\r\nAT\r\n\r\n");
	}
}

