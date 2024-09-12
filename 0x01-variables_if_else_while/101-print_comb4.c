#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig_1 = '0', dig_2 = '1', dig_3 = '2';

	while (dig_1 <= '7')
	{
		while (dig_2 <= '8')
		{
			while (dig_3 <= '9')
			{
				putchar(dig_1);
				putchar(dig_2);
				putchar(dig_3);
				if (dig_1 != '7' || dig_2 != '8' || dig_3 != '9')
				{
					putchar(',');
					putchar(' ');
				}
				dig_3++;
			}
			dig_3 = dig_2 + 2;
			dig_2++;
		}
		dig_2 = dig_1 + 2;
		dig_3 = dig_2 + 1;
		dig_1++;
	}
	putchar('\n');
	return (0);
}
