#include "main.h"

/**
 * _printf - function that produce outpout according to a format.
 * @format:  a character string
 *
 * Return: Always succcess
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			len += specifier(format[i + 1], args);
			i += 2;
		}
		else
		{
			len++;
			_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
