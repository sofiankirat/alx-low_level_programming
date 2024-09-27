#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: A pointer to a string whose will print
 *
 * Return: This function returns no value (void)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
