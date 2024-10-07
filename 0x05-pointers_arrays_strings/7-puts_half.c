#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: A pointer to a string, that will print half of it
 *
 * Return: This function returns no value (void)
 */
void puts_half(char *str)
{
	int  i = 0, j = 1;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	while (j <= i / 2)
	{
		str--;
		j++;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\0');
	_putchar('\n');
}
