#include <stdio.h>

/**
 * sum_multi_3_5 - Prints the sum of all the multiples of 3 | 5 below 1024(exc)
 *
 * Return: This function returns no value (void)
 */
void sum_multi_3_5(void)
{
	int i, sum = 0;

	for (i = 1 ; i <= 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
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
	sum_multi_3_5();
	return (0);
}
