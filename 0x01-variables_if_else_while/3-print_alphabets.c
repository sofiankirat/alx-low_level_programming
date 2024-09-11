#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
		if (alpha == 123)
		{
			alpha = alpha - 58;
			while (alpha >= 65 && alpha <= 90)
			{
				putchar(alpha);
				alpha++;
			}
			alpha = alpha + 32;
		}
	}
	putchar('\n');
	return (0);
}
