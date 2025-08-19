/**
 * reverse_array - This function reverses the content of an array of integers.
 * @a: A pointer to int that points to the first element of the array.
 * @n: The number of elements of the array.
 *
 * Return: This function returns no value (void).
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	for (; i < n / 2; i++)
	{
		int t = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
