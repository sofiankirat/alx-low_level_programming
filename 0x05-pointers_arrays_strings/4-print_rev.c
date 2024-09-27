#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: A pointer to a string that will be printed in reverse
 *
 * Return: This function returns no value (void)
 */
void print_rev(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
		i++;
	s--;
	while (i != 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}
