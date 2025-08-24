#include "main.h"

/**
 * print_number - A function that prints an integer.
 * @n: The integer to be printed.
 *
 * Return: This function returns no value (void)
 */

void print_number(int n)
{
	int d = 10, temp, t = 0, v;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	temp = n;
	while (temp / d != 0)
	{
		d *= 10;
		if (d == 1000000000)
		{
			t = 1;
			break;
		}
	}
	if (t == 1)
	{
		while (temp != 0)
		{
			v = temp / d;
			_putchar(v + 48);
			temp -= v * d;
			d /= 10; }}
	else
	{
		d /= 10;
		while (temp != 0)
		{
			v = temp / d;
			_putchar(v + 48);
			temp -= v * d;
			d /= 10; }}}
