#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>


typedef struct handler
{
	char spec;
	int (*func)(va_list);
} handler_t;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_percent(void);
int print_string(va_list args);
int print_i(va_list args);

int print_decimal(va_list args);

#endif
