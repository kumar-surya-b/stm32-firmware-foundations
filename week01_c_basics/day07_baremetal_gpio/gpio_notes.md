GPIO clocks must be enabled before configuring GPIO registers.

MODER controls whether a pin is input/output/AF/analog.

ODR controls the actual output level.

Toggling is done using XOR.

Output mode = 01 in MODER.

Each pin uses 2 bits in MODER.

PA5 is at bit positions 10 and 11 (2 bits per pin × pin 5).

This is the same technique used in custom drivers, startup code, and bootloaders.