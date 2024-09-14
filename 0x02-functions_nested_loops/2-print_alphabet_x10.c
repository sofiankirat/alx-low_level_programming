#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase to stdout
 *
 * Return: This function returns no value (void).
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
