#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			if (i != 100)
				putchar(' ');
			else
				putchar('\n');
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
			if (i != 100)
				putchar(' ');
			else
				putchar('\n');
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				putchar(' ');
			else
				putchar('\n');
		}
		else
		{
			printf("%d", i);
			if (i != 100)
				putchar(' ');
			else
				putchar('\n');
		}
	}
	return (0);
}
