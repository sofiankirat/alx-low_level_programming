#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: A ponter to a string, which will be print every other character of it
 *
 * Return: This function returns no value (void)
 */
void puts2(char *str)
{
	int i = 0, j = 1;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	str = str - i;
	if (i % 2 == 0)
	{
		for (; j <= i / 2; j++)
		{
			_putchar(*str);
			str += 2;
		}
	}
	else
	{
		for (; j <= (i / 2) + 1; j++)
		{
			_putchar(*str);
			str += 2;
		}
	}
	_putchar('\n');
}
