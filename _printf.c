#include "main.h"

/**
 * _printf - تطبع مخرجات بصيغة معينة، شبيهة بدالة printf
 * @format: سترنق التنسيق يحتوي على النص والمحددات (specifiers)
 * 
 * Return: عدد الحروف المطبوعة، أو -1 عند الخطأ
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, count, found;

handler_t handlers[] = {
	{'c', print_char},
	{'s', print_string},
	{'d', print_decimal},
	{'i', print_i},
	{'\0', NULL}
};
	if (format == NULL)
		return (-1);

	va_start(args, format);
	count = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			count += write(1, &format[i], 1);
			continue;
		}

		i++;
		if (format[i] == '\0')
			return -1;

		if (format[i] == '%')
		{
			count += print_percent();
			continue;
		}

		found = 0;
		for (j = 0; handlers[j].spec != '\0'; j++)
		{
			if (handlers[j].spec == format[i])
			{
				count += handlers[j].func(args);
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			count += write(1, "%", 1);
			count += write(1, &format[i], 1);
		}
	}

	va_end(args);
	return (count);
}