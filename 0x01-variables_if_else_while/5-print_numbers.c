#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = '0';

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
