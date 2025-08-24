#include "main.h"

/**
 * print_number - A function that prints an integer.
 * @n: The integer to be printed.
 *
 * Return: This function returns no value (void)
 */

void print_number(int n)
{
	int d = 10, temp, t = 0, v, p = 0;

	if (n < 0)
	{
		_putchar('-');
		if (n != -2147483648)
			n = -n;
		else
		{
			n += 1;
			n = -n;
			p = 1; }}
	temp = n;
	while (temp / d != 0)
	{d *= 10;
		if (d == 1000000000)
		{t = 1;
			break; }}
	if (t == 1)
	{
		while (temp != 0)
		{v = temp / d;
			if (d != 1)
				_putchar(v + 48);
			else
			{
				if (p == 0)
					_putchar(v + 48);
				else
					_putchar(v + 49); }
			temp -= v * d;
			d /= 10; }}
	else
	{d /= 10;
		while (d != 0)
		{v = temp / d;
			_putchar(v + 48);
			temp -= v * d;
			d /= 10; }}}
