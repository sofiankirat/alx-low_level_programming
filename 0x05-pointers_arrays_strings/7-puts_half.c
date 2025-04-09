/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: A pointer to char that contain the first character of the string
 *
 * Return: This function returns no value (void)
 */
#include "main.h"
void puts_half(char *str)
{
	int c = 0, n, p = 1;

	while (*str != '\0')
	{
		c++;
		str++;
	}
	if (c % 2 != 0)
		n = (c - 1) / 2;
	else
		n = c / 2;
	while (p <= n)
	{
		str--;
		p++;
	}
	p = 1;
	while (p <= n)
	{
		_putchar(*str);
		p++;
		str++;
	}
	_putchar(10);
}

