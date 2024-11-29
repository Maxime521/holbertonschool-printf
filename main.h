#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct print_func - structure to map specifiers to
 * their corresponding functions.
 * @specifier: the specifier
 * @func: The function pointer to handle the specifier
 */
typedef struct print_func
{
	char *specifier;
	int (*func)(va_list);
} print_func;

int _putchar(char c);
int _printf(const char *format, ...);
int get_specifier(const char c, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);

#endif
