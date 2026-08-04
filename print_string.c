#include "main.h"

/**
 * print_string - Prints a string to the standard output
 * @args: A va_list containing the arguments passed to _printf
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
	char *str;
	int count = 0;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}

	return (count);
}
