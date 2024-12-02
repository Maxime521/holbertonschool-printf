#include "main.h"
#include <stddef.h>
/**
 * get_specifier - Returns a function corresponding to a specifier
 * @specifier: The format specifier
 * @args: Lists of arguments
 *
 * Return: Pointer to the corresponding function nill if not found
 */
int get_specifier(char specifier, va_list args)
{
	int i = 0;
	op_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_i_d},
		{"i", print_i_d},
		{NULL, NULL}
	};
	while (ops[i].specifier)
	{
		if (*(ops[i].specifier) == specifier)
			return (ops[i].func(args));
		i++;
	}
	return (0);
}
