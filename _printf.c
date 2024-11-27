#include "main.h"

/**
 * print_str - Fonction that print string,
 * following conversion specifiers %c, %s, %%
 * @format: number of arguments
 * Return: len
 */

int _printf(const char *format, ...)
{
	int x;
	int y;
	int len = 0;
	char *str;

	va_list arg;
	va_start(arg, format);


	if (format == NULL)
	{
		return (-1);
	}
	for (x = 0; format[x] != '\0' ; x++)
	{
		if (format[x] == '%' && format[x + 1] == 's')
		{
			str = va_arg(arg, char *);
			{
				if (str != NULL)
				{
					for (y = 0; str[y] != '\0'; y++)
					{
						_putchar(str[y]);
						len++;
					}
				}
				else if (str == NULL)
				{
					return (-1);
				}
			}
		}
		else if (format[x] == '%' && format[x + 1] == '%')
		{
			_putchar('%');
			len++;

		}
		else
		{
			_putchar(format[x]);
			{
				len++;
			}
		}
	}
	va_end(arg);
	return(len);
}
