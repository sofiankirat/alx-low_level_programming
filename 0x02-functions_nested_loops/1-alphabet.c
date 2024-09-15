#include "main.h"

/**
 * print_alphabet - writes the alphabet, in lowercase to stdout
 *
 * Return: This function returns no value (void).
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
