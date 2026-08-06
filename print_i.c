#include "main.h"

/**
 * print_i_helper - Helper function to print digits recursively
 * @num: The unsigned number to print
 *
 * Return: The number of characters printed
 */
int print_i_helper(unsigned long int num)
{
	int count = 0;
	char c;

	if (num / 10)
		count += print_i_helper(num / 10);

	c = (num % 10) + '0';
	write(1, &c, 1);
	count++;

	return (count);
}

/**
 * print_i - Prints an integer for the i specifier
 * @args: A va_list containing the arguments passed to _printf
 *
 * Return: The number of characters printed
 */
int print_i(va_list args)
{
	long int n;
	unsigned long int num;
	int count = 0;

	n = va_arg(args, int);

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	count += print_i_helper(num);

	return (count);
}
