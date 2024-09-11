#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int di_al = '0';

	while (di_al <= '9')
	{
		putchar(di_al);
		di_al++;
		if (di_al == ':')
		{
			di_al += '\'';
			while (di_al <= 'f')
			{
				putchar(di_al);
				di_al++;
			}
		}
	}
	putchar('\n');
	return (0);
}
