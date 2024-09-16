#include <stdio.h>

/**
 * fibonacci - Prints the first n Fibonacci numbers, starting with 1 and 2
 * @n: Specify how many Fibonacci numbers will be printed
 *
 * Return: This function returns no value (void)
 */
void fibonacci(int n)
{
	unsigned int i = 1, j = 1, z = 1;

	do {
		printf("%u", j);
		if (i != 50)
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
