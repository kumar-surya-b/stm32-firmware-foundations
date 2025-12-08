- Primary goal: Create UART-based bootloader
- Dual-bank firmware idea:
    Bank 1 = Active firmware
    Bank 2 = Update firmware
- Rollback mechanism if update fails
- Bootloader decides which firmware to boot
- Protocol: header + length + data + CRC
- Jump to application uses function pointer at App Reset_Handler