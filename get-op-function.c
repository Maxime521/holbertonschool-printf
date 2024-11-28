#include "main.h"
#include <stddef.h>

/**
 * get_op_function - Returns a function corresponding to a specifier
 * @specifier: The format specifier
 *
 * Return: Pointer to the corresponding function or nill if not found
 */
int (*get_op_function(char specifier))(va_list)
{
	int i = 0;
	op_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	while (ops[i].get_op_function)
	{
		if (*(ops[i].get_op_function) == get_op_function)
			return (ops[i].func);
		i++;
	}
	return (NULL);
}
