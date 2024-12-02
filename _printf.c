#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
<<<<<<< HEAD
 * _printf - function that produce outpout according to a format.
 * @format:  a character string
 *
 * Return: Always succcess
=======
 * _printf - Produces formatted output.
 * @format: Format string containing the text and format specifiers.
 *
 * Return: Total number of characters printed.
>>>>>>> bba5b7026a44911d338105d715f2abe6ae72e747
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
<<<<<<< HEAD
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
=======
	int j;
	va_list args;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				len += _putchar(va_arg(args, int));
			else if (format[i] == 's')
			{
				char *str = va_arg(args, char *);

				if (!str)
					str = "(null)";
				for (j = 0; str[j]; j++, len++)
					_putchar(str[j]);
			}
			else if (format[i] == '%')
				len += _putchar('%');
			else
			{
				len += _putchar('%');
				len += _putchar(format[i]);
			}
		}
		else
		{
			len += _putchar(format[i]);
>>>>>>> bba5b7026a44911d338105d715f2abe6ae72e747
		}
		i++;
	}
	va_end(args);
	return (len);
}
