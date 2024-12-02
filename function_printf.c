#include "main.h"
/**
 * print_char - displays a character
 * @args: list of arguments
 *
 * Return: number of printed characters
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * print_string - displays a string of character
 * @args: List of arguments
 *
 * Return: number of printed characters
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		_putchar(*str++);
		len++;
	}
	return (len);
}
/**
 * print_percent - displays a character '%'
 * @args: List of arguments not used
 *
 * Return: Number of printed character
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
/**
 * print_i_d - prints integer
 * @args: list of arguments
 * Return: int , lenght
 */
int print_i_d(va_list args)
{
	int arg = va_arg(args, int);
	int power = 1, len = 0;
	unsigned int tmp_num;

	if (arg < 0)
	{
		_putchar('-');
		arg *= -1;
		len++;
	}
	tmp_num = arg;

	if (tmp_num == 0)
	{
		_putchar('0');
		return (len + 1);
	}
	while (tmp_num / power >= 10)
		power *= 10;
	while (power > 0)
	{
		_putchar((tmp_num / power) + '0');
		tmp_num %= power;
		power /= 10;
		len++;
	}
	return (len);
}
