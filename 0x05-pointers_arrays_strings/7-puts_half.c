#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: A pointer to a string, that will print half of it
 *
 * Return: This function returns no value (void)
 */
void puts_half(char *str)
{
	int  i = 0, n, j = 1;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	if (i % 2 == 0)
	{
		while (j <= i / 2)
		{
			str--;
			j++;
		}
	}
	else
	{
		n = (i - 1) / 2;
		while (j <= n)
		{
			str--;
			j++;
		}
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
