Flash begins at 0x08000000

SRAM begins at 0x20000000

Peripherals live in 0x40000000 region

Cortex system registers at 0xE0000000

RCC enables clocks for all subsystems

GPIO registers configure pin mode and output

NVIC controls interrupt routing

Bootloader + application sit in separate flash sections