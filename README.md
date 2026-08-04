# Custom printf() Implementation

A custom implementation of the standard C `printf` function, developed collaboratively for Holberton School, by Ozoof, Abdulrahman, Lujain.
 This project involves recreating the core functionality of formatted output, handling variadic arguments, and understanding low-level I/O operations.

## Description
The `_printf` function writes output to standard output (stdout) under the control of a format string that specifies how subsequent arguments are converted for output.

## Supported Conversion Specifiers
For Task 0, we have implemented the following core specifiers:
* `%c`: Prints a single character.
* `%s`: Prints a string of characters.
* `%%`: Prints a literal percent sign.

## Usage
To use this function, include the `main.h` header in your C files and compile them together.

```c
#include "main.h"

int main(void)
{
    _printf("Hello %s! This is a character: %c\n", "Holberton", 'H');
    return (0);
}
