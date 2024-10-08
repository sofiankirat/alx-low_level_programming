#include "main.h"

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line.
 * @a: A pointer to an integer, which will be print
 * @n: The number of elements of the array to be printed
 *
 * Return: This function returns no value (void)
 */
void print_array(int *a, int n)
{
	int i = 1;

	for (; i <= n; i++)
	{
		printf("%d", *a);
		if (i != n)
			printf(", ");
		a++;
	}
	printf("\n");
}
