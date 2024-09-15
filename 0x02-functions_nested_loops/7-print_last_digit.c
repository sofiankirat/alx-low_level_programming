#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number which we will obtain from it the last digit
 *
 * Return: The last digit of a number
 */
int print_last_digit(int n)
{
	int z;

	if (n >= 0)
		z = n % 10;
	else
		z = -(n % 10);
	_putchar(z + 48);
	return (z);
}
