#include "main.h"

/**
 * print_percent - Prints a percent sign
 *
 * Return: Number of characters printed
 */
int print_percent(void)
{
	char percent;

	percent = '%';
	return (write(1, &percent, 1));
}
