#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Number to print
 *
 * Return: This function returns no value (void)
 */
void print_number(int n)
{
	int i = 1, j = 10, p, k;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n % j != n)
	{
		j = j * 10;
		i = i + 1;
	}
	j = j / 10;
	for (p = 1; p <= i; p++)
	{
		k = (n - (n % j)) / j;
		_putchar(k + 48);
		n = n - (k * j);
		j = j / 10;
	}
}

