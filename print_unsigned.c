#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n;
	char buffer[10];
	int i, count;

	n = va_arg(args, unsigned int);
	if (n == 0)
		return (write(1, "0", 1));

	i = 0;
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	count = 0;
	while (i > 0)
		count += write(1, &buffer[--i], 1);

	return (count);
}

/**
 * print_octal - prints an unsigned integer in octal
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n;
	char buffer[11];
	int i, count;

	n = va_arg(args, unsigned int);
	if (n == 0)
		return (write(1, "0", 1));

	i = 0;
	while (n > 0)
	{
		buffer[i++] = (n % 8) + '0';
		n /= 8;
	}

	count = 0;
	while (i > 0)
		count += write(1, &buffer[--i], 1);

	return (count);
}

/**
 * print_hex_lower - prints an unsigned integer in lowercase hexadecimal
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_hex_lower(va_list args)
{
	unsigned int n;
	char buffer[8];
	char *digits = "0123456789abcdef";
	int i, count;

	n = va_arg(args, unsigned int);
	if (n == 0)
		return (write(1, "0", 1));

	i = 0;
	while (n > 0)
	{
		buffer[i++] = digits[n % 16];
		n /= 16;
	}

	count = 0;
	while (i > 0)
		count += write(1, &buffer[--i], 1);

	return (count);
}

/**
 * print_hex_upper - prints an unsigned integer in uppercase hexadecimal
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_hex_upper(va_list args)
{
	unsigned int n;
	char buffer[8];
	char *digits = "0123456789ABCDEF";
	int i, count;

	n = va_arg(args, unsigned int);
	if (n == 0)
		return (write(1, "0", 1));

	i = 0;
	while (n > 0)
	{
		buffer[i++] = digits[n % 16];
		n /= 16;
	}

	count = 0;
	while (i > 0)
		count += write(1, &buffer[--i], 1);

	return (count);
}
