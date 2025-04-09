/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: A pointer to integer that contain the first integer of the array
 * @n: The number of elements of the array to be printed
 *
 * Return: This function returns no value (void)
 */
#include "main.h"
void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i != n)
			printf("%d, ", *a);
		else
			printf("%d\n", *a);
		a++;
	}
}
