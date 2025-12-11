#include <stdint.h>

extern void Reset_Handler(void);

__attribute__((section(".isr_vector")))
uint32_t vector_table[] = {
    0x20010000,          // Initial MSP value (top of RAM)
    (uint32_t)Reset_Handler   // Reset handler address
};