#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Number to print
 *
 * Return: This function returns no value (void)
 */
void print_number(int n)
{
	int i = 1, j = 10, p, k, m = -1;

	if (n < 0)
		_putchar('-');
	while (n % j != n && m == -1)
	{
		if (j == 1000000000)
		{
			m = (n - (n % j)) / j;
			if (m < 0)
				m = -m;
		}
		if (j != 1000000000)
			j = j * 10;
		i = i + 1;
	}
	j = j / 10;
	for (p = 1; p <= i; p++)
	{
		if (j == 100000000 && i == 10)
		{
			_putchar(m + 48);
			n = n % 1000000000;
			p++;
		}
		k = (n - (n % j)) / j;
		if (k < 0)
			k = -k;
		_putchar(k + 48);
		if (n < 0)
			n = -n;
		n = n - (k * j);
		j = j / 10;
	}
}
