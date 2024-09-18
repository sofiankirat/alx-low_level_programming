#include "main.h"

/**
 * positive_or_negative - prints if integer is positive or negative or zero
 * @i: The integer to check
 *
 * Return: This function returns no value
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
