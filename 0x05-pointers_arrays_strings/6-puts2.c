/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: A pointer to char that contain the first character of the string
 *
 * Return: This function returns no value (void)
 */
#include "main.h"
void puts2(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		if (c % 2 == 0)
		{
			_putchar(*str);
		}
		c++;
		str++;
	}
	_putchar(10);
}
