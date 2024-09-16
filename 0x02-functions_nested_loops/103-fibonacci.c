#include <stdio.h>

/**
 * even_sum_fib - prints the sum of the even-valued terms in Fibonacci sequence
 * @n: The terms in the Fibonacci sequence do not exceed n
 *
 * Return: This function returns no value (void)
 */
void even_sum_fib(long int n)
{
	long int j = 1, z = 1, sum = 0;

	for (; j <= n; )
	{
		if (j % 2 == 0)
			sum = sum + j;
		j = j + z;
		z = j - z;
	}
	printf("%ld\n", sum);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	even_sum_fib(4000000);
	return (0);
}
