#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fi_d = '0', se_d = '0', th_d = '0', fo_d = '1';

	while (fi_d <= '9')
	{
		while (se_d <= '9')
		{
			while (th_d <= '9')
			{
				while (fo_d <= '9')
				{
					putchar(fi_d);
					putchar(se_d);
					putchar(' ');
					putchar(th_d);
					putchar(fo_d);
					if (fi_d != '9' || se_d != '8' || th_d != '9' || fo_d != '9')
					{
						putchar(',');
						putchar(' ');
					}
					fo_d++;
				}
				fo_d = '0';
				th_d++;
			}
			th_d = fi_d;
			se_d++;
			fo_d = se_d + 1;
			if (fi_d == '9' && se_d == '9')
				se_d++;
		}
		fi_d++;
		se_d = '0';
		th_d = fi_d;
		fo_d = '1';
	}
	putchar('\n');
	return (0);
}
