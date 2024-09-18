#include <stdio.h>

/**
 * fibonacci - Prints the first n Fibonacci numbers, starting with 1 and 2
 * @n: Specify how many Fibonacci numbers will be printed, max n = 92
 *
 * Return: This function returns no value (void)
 */
void fibonacci(int n)
{
	int i = 1;

	unsigned long int j = 1, z = 1;

	do {
		printf("%lu", j);
		if (i != n)
			printf(", ");
		j = j + z;
		z = j - z;
		i++;
	} while (i <= n);
	printf("\n");
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fibonacci(50);
	return (0);
}
