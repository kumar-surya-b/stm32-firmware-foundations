- Vector table placed at start of FLASH.
- Word 0 = MSP initial value.
- Word 1 = Reset_Handler address.
- Bootloader overrides these.
- Reset_Handler is responsible for:
    • Copying .data from FLASH → RAM
    • Zeroing .bss
    • Calling main()
- Application linker script defines addresses for _sdata, _edata, _sidata, _sbss, _ebss.
- Startup code runs BEFORE C runtime exists.
- Startup code is the foundation of any bootloader.