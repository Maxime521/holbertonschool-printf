#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct op - structure to map a specifier to its function
 * @specifier: the specifier
 * @func: Pointer to the funtion that manages the specifier
 */
typedef struct op
{
	char *specifier;
	int (*func)(va_list args);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int specifier(const char charac, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);

#endif
