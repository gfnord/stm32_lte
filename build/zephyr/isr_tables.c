
/* AUTO-GENERATED by gen_isr_tables.py, do not edit! */

#include <toolchain.h>
#include <linker/sections.h>
#include <sw_isr_table.h>
#include <arch/cpu.h>

#if defined(CONFIG_GEN_SW_ISR_TABLE) && defined(CONFIG_GEN_IRQ_VECTOR_TABLE)
#define ISR_WRAPPER ((u32_t)&_isr_wrapper)
#else
#define ISR_WRAPPER NULL
#endif

u32_t __irq_vector_table _irq_vector_table[95] = {
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
	ISR_WRAPPER,
};
struct _isr_table_entry __sw_isr_table _sw_isr_table[95] = {
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x200013c0, (void *)0x80037f5},
	{(void *)0x200013c0, (void *)0x80037ff},
	{(void *)0x200013c0, (void *)0x8003809},
	{(void *)0x200013c0, (void *)0x8003813},
	{(void *)0x200013c0, (void *)0x800381d},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x200013c0, (void *)0x8003827},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x200013e4, (void *)0x80049a1},
	{(void *)0x200013d8, (void *)0x80049a1},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x200013c0, (void *)0x8003831},
	{(void *)0x200013cc, (void *)0x800485d},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
	{(void *)0x0, (void *)&_irq_spurious},
};