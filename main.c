#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - نقطة الدخول لاختبار _printf مقابل printf الأصلية
 *
 * Return: 0 دايماً
 */
int main(void)
{
	int len1, len2;

	len1 = _printf("Simple sentence.\n");
	len2 = printf("Simple sentence.\n");
	_printf("len1: %d, len2: %d\n", len1, len2);
	printf("len1: %d, len2: %d\n\n", len1, len2);

	len1 = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	_printf("len1: %d, len2: %d\n\n", len1, len2);

	len1 = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	_printf("len1: %d, len2: %d\n\n", len1, len2);

	len1 = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("len1: %d, len2: %d\n\n", len1, len2);

	len1 = _printf("Positive:[%d]\n", 762534);
	len2 = printf("Positive:[%d]\n", 762534);
	_printf("len1: %d, len2: %d\n\n", len1, len2);

	len1 = _printf("Negative:[%i]\n", -762534);
	len2 = printf("Negative:[%i]\n", -762534);
	_printf("len1: %d, len2: %d\n\n", len1, len2);

	len1 = _printf("INT_MAX:[%d]\n", INT_MAX);
	len2 = printf("INT_MAX:[%d]\n", INT_MAX);
	_printf("len1: %d, len2: %d\n\n", len1, len2);

	len1 = _printf("INT_MIN:[%d]\n", INT_MIN);
	len2 = printf("INT_MIN:[%d]\n", INT_MIN);
	_printf("len1: %d, len2: %d\n\n", len1, len2);

	len1 = _printf("Mixed:[%c-%s-%d-%%]\n", 'X', "test", 42);
	len2 = printf("Mixed:[%c-%s-%d-%%]\n", 'X', "test", 42);
	_printf("len1: %d, len2: %d\n\n", len1, len2);

	return (0);
}