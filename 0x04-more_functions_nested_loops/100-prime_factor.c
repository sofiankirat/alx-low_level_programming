#include <stdio.h>
#include <math.h>

/**
 * Lar_primefactor - Finds and prints the largest prime factor of the number n
 * @n: The number which will be find its prime factors
 *
 * Return: This function returns no value (void)
 */
void Lar_primefactor(long int n)
{
	long int i = 2, largest = 1, j = 2, p, k = sqrt(n);

	for (; i <= k; i++)
	{
		if (n % i == 0 && largest < (n / i))
		{
			p = n / i;
			for (; j < p; j++)
			{
				if (p % j == 0)
					break;
			}
			if (j == p)
				largest = p;
			j = 2;
		}
	}
	if (largest == 1)
	{
		for (i = 2; i <= n; i++)
		{
			if (i % n == 0)
			{
				for (j = 2; j < i; j++)
				{
					if (i % j == 0)
						break;
				}
				if (i == j)
					largest = i;
				j = 2;
			}
		}
	}
	printf("%ld\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	Lar_primefactor(612852475143);
	return (0);
}
