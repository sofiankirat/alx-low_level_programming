#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: specify how many time table
 *
 * Return: This function returns no value (void)
 */
void print_times_table(int n)
{
int i, j, z, first, second, third;

if (n <= 15 && n >= 0)
{
	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{z = i * j;
			if (z <= 9)
			{_putchar(z + 48);
				if (j != n)
				{_putchar(',');
					_putchar(' ');
					_putchar(' ');
					if (i * (j + 1) <= 9)
						_putchar(' ');
				}
			}
			else if (z > 9 && z <= 99)
			{second = z % 10, first = (z - second) / 10;
				_putchar(first + 48);
				_putchar(second + 48);
				if (j != n)
				{_putchar(',');
					_putchar(' ');
					if (i * (j + 1) <= 99)
						_putchar(' ');
				}}
			else
			{third = z % 10, second = ((z - third) / 10) % 10;
				first = (((z - third) / 10) - second) / 10;
				_putchar(first + 48);
				_putchar(second + 48);
				_putchar(third + 48);
				if (j != n)
				{_putchar(',');
					_putchar(' ');
				}}}
		_putchar('\n');
}}}
