NVIC Base Address:0xE000E100

Enable an interrupt:
*((uint32_t*)0xE000E100) |= (1 << IRQn);

Set interrupt priority:
*((uint8_t*)0xE000E400) = priority_value;