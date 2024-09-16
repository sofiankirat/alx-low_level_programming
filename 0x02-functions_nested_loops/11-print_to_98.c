#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The first printed number
 *
 * Return: This function returns no value (void)
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
		printf("\n");
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
		printf("\n");
	}
	else
	{
		printf("98");
		printf("\n");
	}
}
