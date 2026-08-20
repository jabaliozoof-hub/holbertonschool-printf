holbertonschool-printf

A custom implementation of the C printf function for the Holberton/ALX low-level programming curriculum.

The project recreates the behavior of the standard printf function for a selected set of conversion specifiers. It uses variadic functions to process different types of arguments and writes formatted output to standard output.

Project Description

The goal of this project is to build a custom _printf function that behaves similarly to the standard C library printf.

The implementation was developed progressively through several tasks, adding support for different conversion specifiers.

The project currently supports:

%c - Prints a single character
%s - Prints a string
%% - Prints a literal percent sign
%d - Prints a signed decimal integer
%i - Prints a signed decimal integer
%u - Prints an unsigned decimal integer
%o - Prints an unsigned integer in octal
%x - Prints an unsigned integer in lowercase hexadecimal
%X - Prints an unsigned integer in uppercase hexadecimal
%b - Prints an unsigned integer in binary (Bonus)
Requirements & Constraints

The project follows the requirements and constraints of the Holberton/ALX printf project.

Requirements
The project is written in the C programming language.
The code follows the GNU89 C standard.
Variadic functions from <stdarg.h> are used to handle variable numbers of arguments.
The _printf function writes output to standard output.
The return value represents the number of characters printed.
The code is compiled with the required compiler flags.
All function prototypes are declared in main.h.
Compiler Flags

The project can be compiled using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o _printf_test
Constraints

The implementation focuses on the required conversion specifiers and does not handle advanced printf features such as:

Flags
Field width
Precision
Length modifiers
Task 0 - _printf

The first task implements the basic _printf function.

Supported Conversion Specifiers
%c - Prints a single character.
%s - Prints a string.
%% - Prints a literal percent sign.
Prototype
int _printf(const char *format, ...);
Return Value

_printf returns the number of characters printed, excluding the terminating null byte.

Files

The implementation is divided into several source files:

_printf.c - Contains the main _printf function and format processing.
print_char.c - Handles %c.
print_string.c - Handles %s.
print_percent.c - Handles %%.
main.h - Contains all function prototypes.
Task 1 - %d and %i

The second task adds support for signed decimal integers.

Supported Conversion Specifiers
%d - Prints a signed decimal integer.
%i - Prints a signed decimal integer.
Example
_printf("Number: %d\n", -42);
_printf("Number: %i\n", 42);

Both %d and %i print decimal integer values.

Return Value

The function returns the total number of characters printed, excluding the terminating null byte.

Files
print_decimal.c - Handles decimal integer printing.
print_i.c - Handles the %i conversion.
Task 2 - %u, %o, %x, %X

The third task adds support for unsigned integer conversions.

Supported Conversion Specifiers
%u - Prints an unsigned decimal integer.
%o - Prints an unsigned integer in octal.
%x - Prints an unsigned integer in lowercase hexadecimal.
%X - Prints an unsigned integer in uppercase hexadecimal.
Example
_printf("Unsigned: %u\n", 42);
_printf("Octal: %o\n", 42);
_printf("Hex: %x\n", 255);
_printf("HEX: %X\n", 255);
Expected Output
Unsigned: 42
Octal: 52
Hex: ff
HEX: FF
Return Value

The function returns the number of characters printed, excluding the terminating null byte.

Files
print_unsigned.c - Handles unsigned integer conversions.
Task 3 - %b (Bonus)

The bonus task adds support for binary conversion.

Supported Conversion Specifier
%b - Prints an unsigned integer in binary.

The binary representation is printed without leading zeros.

Example
_printf("Binary: %b\n", 5);
Expected Output
Binary: 101
Return Value

The function returns the number of characters printed, excluding the terminating null byte.

File
print_binary.c - Handles the %b conversion.
Compilation

To compile the project together with the test main.c, use:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o _printf_test

This command compiles all C source files and creates an executable named:

_printf_test

Run the program using:

./_printf_test
Usage Example

The following example demonstrates all supported conversion specifiers:

#include "main.h"

int main(void)
{
    _printf("Char: %c\n", 'H');
    _printf("String: %s\n", "Hello");
    _printf("Percent: %%\n");
    _printf("Int: %d, %i\n", -42, 42);
    _printf("Unsigned: %u\n", 42);
    _printf("Octal: %o\n", 42);
    _printf("Hex: %x, %X\n", 255, 255);
    _printf("Binary: %b\n", 5);

    return (0);
}
Output
Char: H
String: Hello
Percent: %
Int: -42, 42
Unsigned: 42
Octal: 52
Hex: ff, FF
Binary: 101
Testing

The output of _printf was compared manually with the standard C printf function using the same inputs.

Testing was performed in a WSL/Linux environment using the GNU C Library (glibc).

The tests included:

Characters using %c
Strings using %s
Literal percent signs using %%
Positive and negative integers using %d and %i
Unsigned integers using %u
Octal values using %o
Lowercase hexadecimal values using %x
Uppercase hexadecimal values using %X
Binary values using %b
Edge Cases

The implementation was also tested with several edge cases, including:

A format string ending with a lone %
A %s conversion with a NULL argument
Negative numbers with %d
Zero values
Multiple conversion specifiers in the same format string
Return Value

For all supported conversions, _printf returns the total number of characters printed.

The terminating null byte is not included in the returned count.

For example:

int count;

count = _printf("Hello");

The value of count is:

5
Project Structure

The project is organized into the following files:

holbertonschool-printf/
│
├── README.md
├── main.h
├── main.c
├── _printf.c
├── print_binary.c
├── print_char.c
├── print_decimal.c
├── print_i.c
├── print_percent.c
├── print_string.c
└── print_unsigned.c
File Description
README.md - Contains the project description, requirements, compilation instructions, usage examples, testing notes, and authors.
main.h - Header file containing function prototypes and include guards.
main.c - Test file used to test the _printf implementation.
_printf.c - Contains the main _printf function and handles format processing.
print_binary.c - Handles the %b conversion and prints unsigned integers in binary.
print_char.c - Handles the %c conversion and prints characters.
print_decimal.c - Handles decimal integer printing.
print_i.c - Handles the %i conversion.
print_percent.c - Handles the %% conversion.
print_string.c - Handles the %s conversion and prints strings.
print_unsigned.c - Handles unsigned integer conversions such as %u, %o, %x, and %X.
Authors

This project was developed by:

Ozoof Ismail Jabali
Lujain Abdulmohsen Alsultan
Abdulrahman Saleh Alduqail
