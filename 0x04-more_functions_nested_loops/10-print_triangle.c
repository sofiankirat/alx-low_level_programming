#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: The size of the triangle
 *
 * Return: This function returns no value (void)
 */
void print_triangle(int size)
{
	int i = 1, j = 1, k = 1;

	if (size > 0)
	{
		do {
			while (i <= size - j)
			{
				_putchar(' ');
				i++;
			}
			i = 1;
			while (k <= j)
			{
				_putchar('#');
				if (k == j)
					_putchar('\n');
				k++;
			}
			k = 1;
			j++;
		} while (j <= size);
	}
	else
		_putchar('\n');
}
