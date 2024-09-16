#include <stdio.h>

/**
 * fibonacci_bignum - prints the first 98 Fibonacci numbers
 *
 * Return: This function returns no valur (void)
 */
void fibonacci_bignum(void)
{
	unsigned long int i = 1, j = 1, z = 1;

	for (; i <= 98; i++)
	{
		printf("%lu", j);
		if (i != 98)
			printf(", ");
		j = j + z;
		z = j - z;
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fibonacci_bignum();
	return (0);
}
