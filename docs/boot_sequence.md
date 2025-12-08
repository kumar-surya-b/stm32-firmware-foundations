1. After power-on/reset, the MCU loads the initial MSP value from address 0x08000000.
2. Then it loads the Reset_Handler address from 0x08000004.
3. CPU sets MSP with the first value.
4. CPU branches to Reset_Handler.
5. Reset_Handler initializes .data and .bss sections.
6. Clock and system initialization happens.
7. Finally, main() is called.
8. Application runs from flash using vector table at 0x08000000 (unless relocated).