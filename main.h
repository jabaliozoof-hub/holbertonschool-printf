#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int print_char(va_list args);
int print_percent(void);
int print_string(va_list args);

#endif
