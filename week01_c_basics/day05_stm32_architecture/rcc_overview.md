RCC Base Address:0x40023800

GPIOA clock enable example:
*(volatile uint32_t*)(0x40023830) |= (1 << 0);   // RCC_AHB1ENR, bit 0 = GPIOA