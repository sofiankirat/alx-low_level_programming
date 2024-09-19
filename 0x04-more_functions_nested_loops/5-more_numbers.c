#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 * Return: This function returns no value (void)
 */
void more_numbers(void)
{
	int i = 1, j = 1, m = '0', n = '1', k = 0;

	do {
		do {
			_putchar(m);
			m++;
			if (m > '9')
			{
				m = '0';
				k  = 1;
			}
			if (k == 1 && j != 15)
				_putchar(n);
			j++;
		} while (j <= 15);
		i++;
		m = '0', n = '1', k = 0, j = 1;
		_putchar('\n');
	} while (i <= 10);
}
