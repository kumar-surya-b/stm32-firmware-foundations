# 📘 Day 6 — Debugging Fundamentals (ST-Link, Registers, Memory, Breakpoints)

Debugging is one of the core skills of a real embedded engineer.  
Today’s notes cover the complete professional debugging workflow for STM32 using ST-Link and CubeIDE.

---

## 1. What ST-Link Actually Does

### 1️⃣ SWD Debugging Interface
- SWDIO + SWCLK (2-wire debug)
- Allows stepping, breakpoints, register access.

### 2️⃣ Flash Programming
- Programs your firmware into STM32 Flash.

### 3️⃣ Real-Time Debugging
- Breakpoints  
- Step over / step into  
- CPU register view  
- RAM/Flash inspection  
- SFR (Special Function Register) view  

### 4️⃣ SWV (Serial Wire Viewer)
- printf without UART  
- Live variable graphing  
- Run-time monitoring  

---

## 2. Essential Debug Windows in STM32CubeIDE

These windows are required for professional embedded debugging:

### Registers Window
Shows internal CPU registers:
- R0–R12  
- MSP, PSP  
- CONTROL, PRIMASK, xPSR  

### SFR (Special Function Registers)
Shows peripheral registers:
- RCC registers  
- GPIO MODER / ODR  
- USART SR / BRR  
- FLASH control/status  

### Memory Browser
View raw memory at any address:
- Flash  
- SRAM  
- Peripheral space  

### Expressions / Variables
Watch global, static, and local variables update in real time.

### Call Stack
Shows HOW you reached the current execution point.

### Breakpoints Window
Create, enable, disable, manage all breakpoints.

---

## 3. Breakpoints — The RIGHT Way to Use Them

Breakpoints are more than "pause here":

### Standard Breakpoint
Stops code execution at the line.

### Conditional Breakpoint
Stops only when a condition is met:
- counter == 500  
- index > 200  
- ptr == NULL  

### Hardware Breakpoint
Used for Flash memory.  
STM32F4 typically has **6 hardware breakpoints**.

### Instruction Breakpoint
Stops at specific assembly instruction.

---

## 4. Watchpoints (Your Secret Debugging Weapon)

A watchpoint stops execution when a memory address is:
- Read  
- Written  
- Accessed  

Use watchpoints for:
- Detecting stack corruption  
- DMA overwriting variables  
- Detecting invalid writes to globals  
- Catching buffer overflows  

Example:

```c
volatile int sensor_value = 0;

int main(void)
{
    while (1) {
        sensor_value += 5;  // Set a watchpoint to stop when modified
    }
}