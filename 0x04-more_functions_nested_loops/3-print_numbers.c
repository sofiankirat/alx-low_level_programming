#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: This function returns no value (void)
 */
void print_numbers(void)
{
	int i = 48;

	do {
		_putchar(i);
		i++;
	} while (i < 58);
	putchar('\n');
}
