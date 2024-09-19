#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9 but not print 2 and 4,
 * followed by a new line
 *
 * Return: This function returns no value (void)
 */
void print_most_numbers(void)
{
	int i = '0';

	do {
		if (i == '2' || i == '4')
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	} while (i < ':');
	_putchar('\n');
}
