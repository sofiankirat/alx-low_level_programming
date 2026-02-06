#include "main.h"

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: A pointer to an integer that points to the first element of the array.
 * @size: The number of rows/columns of the square matrix.
 *
 * Return: This function returns no value (void).
 */

void print_diagsums(int *a, int size)
{
	long int i = 0, sum1 = 0, sum2 = 0;

	for (; i < size; i++)
	{
		sum1 += a[i + size * i];
		sum2 += a[i * (size - 1) + (size - 1)];
	}
	printf("%ld, %ld\n", sum1, sum2);
}
