/**
 * swap_int - swaps the values of two integers.
 * @a: A pointer to an integer for the first value will be swapped
 * @b: A pointer to an integer for the second value will be swapped
 *
 * Return: This function returns no value (void)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
