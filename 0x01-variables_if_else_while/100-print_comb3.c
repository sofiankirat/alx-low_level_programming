#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_1 = '0', digit_2 = '1';

	while (digit_1 <= '8')
	{
		while (digit_2 <= '9')
		{
			putchar(digit_1);
			putchar(digit_2);
			if (digit_1 != 56 || digit_2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
			digit_2++;
		}
		digit_2 = digit_1 + 2;
		digit_1++;
	}
	putchar('\n');
	return (0);
}
