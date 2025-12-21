ENTRY(Reset_Handler)

/* Memory regions */
MEMORY
{
    FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 64K
    RAM (rw)   : ORIGIN = 0x20000000, LENGTH = 20K
}

/* Sections mapping */
SECTIONS
{
    .text :
    {
        *(.isr_vector)
        *(.text*)
        *(.rodata*)
    } > FLASH

    .data :
    {
        *(.data*)
    } > RAM AT > FLASH

    .bss :
    {
        *(.bss*)
        *(COMMON)
    } > RAM

    .stack (NOLOAD) :
    {
        . = ALIGN(8);
        _stack_start = .;
        . = . + 0x800;   /* 2 KB stack */
        _stack_end = .;
    } > RAM
}