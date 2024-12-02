#include "main.h"

/**
 * _printf - Function that produce output according to a format.
 *
 * @format: String that can include text to print or format specifiers, if any.
 *
 * Return: The length of the printed string &/or printed args, -1 if !format.
 */

int _printf(const char *format, ...)
{
	int i = 0, total_lengh = 0;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			total_lengh += get_specifier(format[i + 1], args);
			i += 2;
		}

		else
		{
			total_lengh++;
			_putchar(format[i]);
			i++;
		}
	}

	va_end(args);

	return (total_lengh);
}
