#include "main.h"

/**
 * print_square - Prints a square, followed by a new line
 * @size: The size of the square
 *
 * Return: This function returns no value (void)
 */
void print_square(int size)
{
	int i = 1, j = 1;

	if (size > 0)
	do {
		do {
			_putchar('#');
			j++;
		} while (j <= size);
		j = 1;
		_putchar ('\n');
		i++;
	} while (i <= size);
	else
		putchar('\n');

}
