#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the character \ should be printed
 *
 * Return: This function returns no value (void)
 */
void print_diagonal(int n)
{
	int i = 1, j = 1;

	if (n > 0)
	{
		do {
			_putchar(92);
			_putchar('\n');
			while (i <= j && j != n)
			{
				_putchar(32);
				i++;
			}
			i = 1;
			j++;
		} while (j <= n);
	}
	else
		_putchar('\n');
}
