#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 *
 * Return: This function returns no value (void)
 */
void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar(95);
			if (i == n)
				_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
