#include "main.h"
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
