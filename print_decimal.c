#include "main.h"

/**
 * print_number - prints an unsigned decimal number
 * @num: number to print
 *
 * Return: number of characters printed
 */
static int print_number(unsigned int num)
{
	int count = 0;
	char digit;

	if (num / 10)
		count += print_number(num / 10);

	digit = (num % 10) + '0';
	write(1, &digit, 1);

	return (count + 1);
}

/**
 * print_decimal - prints a decimal integer
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_decimal(va_list args)
{
	int n;
	unsigned int num;
	int count = 0;

	n = va_arg(args, int);

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		num = -(unsigned int)n;
	}
	else
		num = (unsigned int)n;

	count += print_number(num);

	return (count);
}
