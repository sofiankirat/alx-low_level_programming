#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: A pointer to an integer whose value will be swapped
 * @b: A pointer to an integer whose value will be swapped
 *
 * Return: This function returns no value (void)
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
