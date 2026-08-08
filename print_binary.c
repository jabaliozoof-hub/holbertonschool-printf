#include "main.h"

/**
 * print_binary - prints an unsigned integer in binary
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int n;
	char buffer[32];
	int i, count;

	n = va_arg(args, unsigned int);

	if (n == 0)
		return (write(1, "0", 1));

	i = 0;
	while (n > 0)
	{
		buffer[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}

	count = 0;
	while (i > 0)
	{
		i--;
		count += write(1, &buffer[i], 1);
	}

	return (count);
}
