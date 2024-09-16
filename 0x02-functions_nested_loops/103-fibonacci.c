#include <stdio.h>

/**
 * even_sum_fib - prints the sum of the even-valued terms in Fibonacci sequence
 *
 * Return: This function returns no value (void)
 */
void even_sum_fib(void)
{
	int i = 1, j = 1, z = 1, sum = 0;

	for (; i <= 50 ; i++)
	{
		if (j <= 4000000)
		{
			if (j % 2 == 0)
				sum = sum + j;
			j = j + z;
			z = j - z;
		}
	}
	printf("%d\n", sum);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	even_sum_fib();
	return (0);
}
