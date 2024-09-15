#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * from 00:00 to 23:59
 *
 * Return: This function returns no value (void)
 */
void jack_bauer(void)
{
	int fi_di = '0', se_di = '0', th_di = '0', fo_di = '0';

	for (; fi_di <= '2' ; fi_di++)
	{
		for (; se_di <= '9' ; se_di++)
		{
			for (; th_di <= '5' ; th_di++)
			{
				for (; fo_di <= '9' ; fo_di++)
				{
					_putchar(fi_di);
					_putchar(se_di);
					_putchar(58);
					_putchar(th_di);
					_putchar(fo_di);
					_putchar('\n');
				}
				fo_di = '0';
			}
			th_di = '0';
			if (fi_di == '2' && se_di == '3')
				se_di = 58;
		}
		se_di = '0';
	}
}
