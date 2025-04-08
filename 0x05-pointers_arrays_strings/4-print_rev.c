/**
 * print_rev - prints a string, in reverse
 * @s: A pointer to char that contain the first character of the string
 *
 * Return: This function returns no value (void)
 */
#include "main.h"
void print_rev(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	s--;
	while (c != 0)
	{
		_putchar(*s);
		s--;
		c--;
	}
	_putchar('\n');
}
