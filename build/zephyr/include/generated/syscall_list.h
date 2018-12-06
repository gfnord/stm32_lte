
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_AIO_CMP_DISABLE 0
#define K_SYSCALL_AIO_CMP_GET_PENDING_INT 1
#define K_SYSCALL_CAN_ATTACH_ISR 2
#define K_SYSCALL_CAN_ATTACH_MSGQ 3
#define K_SYSCALL_CAN_CONFIGURE 4
#define K_SYSCALL_CAN_DETACH 5
#define K_SYSCALL_CAN_SEND 6
#define K_SYSCALL_COUNTER_GET_PENDING_INT 7
#define K_SYSCALL_COUNTER_READ 8
#define K_SYSCALL_COUNTER_START 9
#define K_SYSCALL_COUNTER_STOP 10
#define K_SYSCALL_DEVICE_GET_BINDING 11
#define K_SYSCALL_DMA_START 12
#define K_SYSCALL_DMA_STOP 13
#define K_SYSCALL_ENTROPY_GET_ENTROPY 14
#define K_SYSCALL_FLASH_ERASE 15
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 16
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 17
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 18
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 19
#define K_SYSCALL_FLASH_READ 20
#define K_SYSCALL_FLASH_WRITE 21
#define K_SYSCALL_FLASH_WRITE_PROTECTION_SET 22
#define K_SYSCALL_GPIO_CONFIG 23
#define K_SYSCALL_GPIO_DISABLE_CALLBACK 24
#define K_SYSCALL_GPIO_ENABLE_CALLBACK 25
#define K_SYSCALL_GPIO_GET_PENDING_INT 26
#define K_SYSCALL_GPIO_READ 27
#define K_SYSCALL_GPIO_WRITE 28
#define K_SYSCALL_I2C_CONFIGURE 29
#define K_SYSCALL_I2C_SLAVE_DRIVER_REGISTER 30
#define K_SYSCALL_I2C_SLAVE_DRIVER_UNREGISTER 31
#define K_SYSCALL_I2C_SLAVE_REGISTER 32
#define K_SYSCALL_I2C_SLAVE_UNREGISTER 33
#define K_SYSCALL_I2C_TRANSFER 34
#define K_SYSCALL_I2S_BUF_READ 35
#define K_SYSCALL_I2S_BUF_WRITE 36
#define K_SYSCALL_I2S_CONFIGURE 37
#define K_SYSCALL_I2S_TRIGGER 38
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 39
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 40
#define K_SYSCALL_IPM_SEND 41
#define K_SYSCALL_IPM_SET_ENABLED 42
#define K_SYSCALL_K_ALERT_RECV 43
#define K_SYSCALL_K_ALERT_SEND 44
#define K_SYSCALL_K_BUSY_WAIT 45
#define K_SYSCALL_K_CURRENT_GET 46
#define K_SYSCALL_K_IS_PREEMPT_THREAD 47
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 48
#define K_SYSCALL_K_MSGQ_GET 49
#define K_SYSCALL_K_MSGQ_GET_ATTRS 50
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 51
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 52
#define K_SYSCALL_K_MSGQ_PEEK 53
#define K_SYSCALL_K_MSGQ_PURGE 54
#define K_SYSCALL_K_MSGQ_PUT 55
#define K_SYSCALL_K_MUTEX_INIT 56
#define K_SYSCALL_K_MUTEX_LOCK 57
#define K_SYSCALL_K_MUTEX_UNLOCK 58
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 59
#define K_SYSCALL_K_OBJECT_ALLOC 60
#define K_SYSCALL_K_OBJECT_RELEASE 61
#define K_SYSCALL_K_PIPE_ALLOC_INIT 62
#define K_SYSCALL_K_PIPE_GET 63
#define K_SYSCALL_K_PIPE_PUT 64
#define K_SYSCALL_K_POLL 65
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 66
#define K_SYSCALL_K_POLL_SIGNAL_INIT 67
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 68
#define K_SYSCALL_K_POLL_SIGNAL_RESET 69
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 70
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 71
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 72
#define K_SYSCALL_K_QUEUE_GET 73
#define K_SYSCALL_K_QUEUE_INIT 74
#define K_SYSCALL_K_QUEUE_IS_EMPTY 75
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 76
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 77
#define K_SYSCALL_K_SEM_COUNT_GET 78
#define K_SYSCALL_K_SEM_GIVE 79
#define K_SYSCALL_K_SEM_INIT 80
#define K_SYSCALL_K_SEM_RESET 81
#define K_SYSCALL_K_SEM_TAKE 82
#define K_SYSCALL_K_SLEEP 83
#define K_SYSCALL_K_STACK_ALLOC_INIT 84
#define K_SYSCALL_K_STACK_POP 85
#define K_SYSCALL_K_STACK_PUSH 86
#define K_SYSCALL_K_STR_OUT 87
#define K_SYSCALL_K_THREAD_ABORT 88
#define K_SYSCALL_K_THREAD_CREATE 89
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 90
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 91
#define K_SYSCALL_K_THREAD_DEADLINE_SET 92
#define K_SYSCALL_K_THREAD_NAME_GET 93
#define K_SYSCALL_K_THREAD_NAME_SET 94
#define K_SYSCALL_K_THREAD_PRIORITY_GET 95
#define K_SYSCALL_K_THREAD_PRIORITY_SET 96
#define K_SYSCALL_K_THREAD_RESUME 97
#define K_SYSCALL_K_THREAD_START 98
#define K_SYSCALL_K_THREAD_SUSPEND 99
#define K_SYSCALL_K_TIMER_REMAINING_GET 100
#define K_SYSCALL_K_TIMER_START 101
#define K_SYSCALL_K_TIMER_STATUS_GET 102
#define K_SYSCALL_K_TIMER_STATUS_SYNC 103
#define K_SYSCALL_K_TIMER_STOP 104
#define K_SYSCALL_K_TIMER_USER_DATA_GET 105
#define K_SYSCALL_K_TIMER_USER_DATA_SET 106
#define K_SYSCALL_K_UPTIME_GET 107
#define K_SYSCALL_K_UPTIME_GET_32 108
#define K_SYSCALL_K_WAKEUP 109
#define K_SYSCALL_K_YIELD 110
#define K_SYSCALL_LED_BLINK 111
#define K_SYSCALL_LED_OFF 112
#define K_SYSCALL_LED_ON 113
#define K_SYSCALL_LED_SET_BRIGHTNESS 114
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 115
#define K_SYSCALL_PWM_PIN_SET_CYCLES 116
#define K_SYSCALL_RTC_DISABLE 117
#define K_SYSCALL_RTC_ENABLE 118
#define K_SYSCALL_RTC_GET_PENDING_INT 119
#define K_SYSCALL_RTC_READ 120
#define K_SYSCALL_RTC_SET_ALARM 121
#define K_SYSCALL_SENSOR_ATTR_SET 122
#define K_SYSCALL_SENSOR_CHANNEL_GET 123
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 124
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 125
#define K_SYSCALL_SPI_RELEASE 126
#define K_SYSCALL_SPI_TRANSCEIVE 127
#define K_SYSCALL_UART_CONFIGURE 128
#define K_SYSCALL_UART_CONFIG_GET 129
#define K_SYSCALL_UART_DRV_CMD 130
#define K_SYSCALL_UART_ERR_CHECK 131
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 132
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 133
#define K_SYSCALL_UART_IRQ_IS_PENDING 134
#define K_SYSCALL_UART_IRQ_RX_DISABLE 135
#define K_SYSCALL_UART_IRQ_RX_ENABLE 136
#define K_SYSCALL_UART_IRQ_TX_DISABLE 137
#define K_SYSCALL_UART_IRQ_TX_ENABLE 138
#define K_SYSCALL_UART_IRQ_UPDATE 139
#define K_SYSCALL_UART_LINE_CTRL_GET 140
#define K_SYSCALL_UART_LINE_CTRL_SET 141
#define K_SYSCALL_UART_POLL_IN 142
#define K_SYSCALL_UART_POLL_OUT 143
#define K_SYSCALL_ZSOCK_ACCEPT 144
#define K_SYSCALL_ZSOCK_BIND 145
#define K_SYSCALL_ZSOCK_CLOSE 146
#define K_SYSCALL_ZSOCK_CONNECT 147
#define K_SYSCALL_ZSOCK_FCNTL 148
#define K_SYSCALL_ZSOCK_INET_PTON 149
#define K_SYSCALL_ZSOCK_LISTEN 150
#define K_SYSCALL_ZSOCK_POLL 151
#define K_SYSCALL_ZSOCK_RECVFROM 152
#define K_SYSCALL_ZSOCK_SENDTO 153
#define K_SYSCALL_ZSOCK_SOCKET 154
#define K_SYSCALL_Z_ERRNO 155
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 156
#define K_SYSCALL__ZEPHYR_FPUTC 157
#define K_SYSCALL__ZEPHYR_FWRITE 158
#define K_SYSCALL__ZEPHYR_READ 159
#define K_SYSCALL__ZEPHYR_WRITE 160
#define K_SYSCALL_BAD 161
#define K_SYSCALL_LIMIT 162


#ifndef _ASMLANGUAGE

#include <zephyr/types.h>

#ifdef __cplusplus
extern "C" {
#endif


extern u32_t hdlr_i2s_configure(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_i2s_buf_read(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_i2s_buf_write(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_i2s_trigger(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_sensor_attr_set(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_sensor_sample_fetch(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_sensor_sample_fetch_chan(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_sensor_channel_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_flash_read(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_flash_write(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_flash_erase(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_flash_write_protection_set(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_flash_get_page_info_by_offs(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_flash_get_page_info_by_idx(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_flash_get_page_count(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_flash_get_write_block_size(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_pwm_pin_set_cycles(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_pwm_get_cycles_per_sec(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_gpio_config(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_gpio_write(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_gpio_read(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_gpio_enable_callback(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_gpio_disable_callback(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_gpio_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_object_access_grant(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_object_release(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_object_alloc(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_create(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_sleep(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_busy_wait(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_yield(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_wakeup(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_current_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_abort(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_start(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_priority_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_priority_set(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_deadline_set(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_suspend(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_resume(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_is_preempt_thread(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_custom_data_set(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_custom_data_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_name_set(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_thread_name_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_timer_start(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_timer_stop(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_timer_status_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_timer_status_sync(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_timer_remaining_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_timer_user_data_set(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_timer_user_data_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_uptime_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_uptime_get_32(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_queue_init(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_queue_cancel_wait(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_queue_alloc_append(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_queue_alloc_prepend(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_queue_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_queue_is_empty(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_queue_peek_head(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_queue_peek_tail(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_stack_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_stack_push(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_stack_pop(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_mutex_init(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_mutex_lock(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_mutex_unlock(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_sem_init(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_sem_take(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_sem_give(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_sem_reset(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_sem_count_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_alert_recv(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_alert_send(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_msgq_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_msgq_put(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_msgq_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_msgq_peek(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_msgq_purge(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_msgq_num_free_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_msgq_get_attrs(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_msgq_num_used_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_pipe_alloc_init(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_pipe_put(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_pipe_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_poll(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_poll_signal_init(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_poll_signal_reset(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_poll_signal_check(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_poll_signal_raise(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_k_str_out(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_entropy_get_entropy(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_err_check(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_poll_in(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_poll_out(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_configure(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_config_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_irq_tx_enable(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_irq_tx_disable(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_irq_rx_enable(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_irq_rx_disable(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_irq_err_enable(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_irq_err_disable(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_irq_is_pending(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_irq_update(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_line_ctrl_set(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_line_ctrl_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_uart_drv_cmd(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_can_send(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_can_attach_msgq(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_can_attach_isr(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_can_detach(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_can_configure(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_spi_transceive(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_spi_release(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_dma_start(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_dma_stop(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_aio_cmp_disable(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_aio_cmp_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_led_blink(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_led_set_brightness(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_led_on(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_led_off(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_rtc_read(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_rtc_enable(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_rtc_disable(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_rtc_set_alarm(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_rtc_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_counter_start(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_counter_stop(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_counter_read(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_counter_get_pending_int(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_ipm_send(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_ipm_max_data_size_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_ipm_max_id_val_get(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_ipm_set_enabled(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_i2c_configure(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_i2c_transfer(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_i2c_slave_register(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_i2c_slave_unregister(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_i2c_slave_driver_register(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_i2c_slave_driver_unregister(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_device_get_binding(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_zsock_socket(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_zsock_close(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_zsock_bind(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_zsock_connect(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_zsock_listen(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_zsock_accept(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_zsock_sendto(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_zsock_recvfrom(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_zsock_fcntl(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_zsock_poll(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_zsock_inet_pton(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_z_zsock_getaddrinfo_internal(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr_z_errno(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr__zephyr_read(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr__zephyr_write(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr__zephyr_fputc(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);

extern u32_t hdlr__zephyr_fwrite(u32_t arg1, u32_t arg2, u32_t arg3,
                u32_t arg4, u32_t arg5, u32_t arg6, void *ssf);


#ifdef __cplusplus
}
#endif

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */
