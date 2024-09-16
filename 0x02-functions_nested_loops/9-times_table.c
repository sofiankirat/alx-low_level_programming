#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: This function returns no value (void)
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9 ; i++)
	{
		int j;

		for (j = 0; j <= 9 ; j++)
		{
			int z = i * j;

			if (z < 10)
			{
				_putchar(z + 48);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					if (i * (j + 1) <= 9)
						_putchar(' ');
				}
			}
			else
			{
				int second = z % 10;

				int first = (z - second) / 10;

				_putchar(first + '0');
				_putchar(second + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
