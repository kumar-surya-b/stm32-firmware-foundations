# STM32 Firmware Foundations

This repository documents my journey from mastering C fundamentals to building a professional-grade custom bootloader for the STM32F411CEU6 microcontroller.  
The project includes register-level programming, flash drivers, custom linker scripts, vector table relocation, UART-based firmware update protocol, and an ESP32 OTA pipeline.

## Repository Structure

- week01_c_basics/  
- week02_stm32_registers/  
- week03_flash_linker_startup/  
- week04_bootloader_skeleton/  
- bootloader_project/  
- docs/

## Hardware Used
- STM32F411CEU6 (Black Pill)
- ST-Link V2 Debug Probe
- FT232RL USB-UART
- Logic Analyzer
- UNI-T UT33D+
- Soldering Tools & Breadboard Setup

## Goal
To build a fully custom, fail-safe bootloader + OTA update system similar to what embedded engineers design at companies like NXP, ST, Qualcomm, or Bosch.
