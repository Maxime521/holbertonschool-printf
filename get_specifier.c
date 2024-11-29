#include "main.h"
#include <stddef.h>

/**
 * get_specifier - Matches a character with the correct print function.
 * @c: the character after '%' to identify the specifier.
 * @args: The arguments list to process.
 *
 * Return: Number of characters printed if a match is found, else 2.
 */
int get_specifier(const char c, va_list args)
{
	int i = 0;

	print_func specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	while (specifiers[i].specifier)
	{
		if (c == *specifiers[i].specifier)
			return (specifiers[i].func(args));
		i++;
	}
	_putchar('%');
	_putchar(c);

	return (2);
}
