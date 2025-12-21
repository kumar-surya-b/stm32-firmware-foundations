#include <stdint.h>

extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sidata;

extern uint32_t _sbss;
extern uint32_t _ebss;

int main(void);

void Reset_Handler(void)
{
    // 1. Copy .data from Flash to RAM
    uint32_t *src = &_sidata;
    uint32_t *dst = &_sdata;

    while (dst < &_edata)
        *dst++ = *src++;

    // 2. Zero initialize .bss
    dst = &_sbss;
    while (dst < &_ebss)
        *dst++ = 0;

    // 3. Call main()
    main();

    while (1); // should never return
}