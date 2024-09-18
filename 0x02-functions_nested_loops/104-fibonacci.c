#include <stdio.h>

/**
 * fibonacci_bignum - prints the first 98 Fibonacci numbers
 *
 * Return: This function returns no valur (void)
 */
void fibonacci_bignum(void)
{
	unsigned long int i = 1, j = 1, z = 1, fir_part, sec_part, thi_part, fou_part;
	unsigned long int f, s, p, u, k;

	for (; i <= 97; i++)
	{
		if (j >= 12200160415121876738LU)
		{
			if (j == 12200160415121876738LU)
			{printf("%lu, ", j);
				fir_part = j % 10000000000, sec_part = (j - fir_part) / 10000000000;
			thi_part = z % 10000000000, fou_part = (z - thi_part) / 10000000000, j += 1;
			} s = fir_part + thi_part, f = sec_part + fou_part, thi_part = fir_part;
			fou_part = sec_part, fir_part = s, sec_part = f;
			if (f > 10000000000 || s > 10000000000)
			{k = (f % 10) + ((s - (s % 10000000000)) / 10000000000);
			if (k <= 9)
				printf("%lu%lu%lu, ", ((f - (f % 10)) / 10), k, s % 10000000000);
			else
			{p = (k - (k % 10)) / 10, k %= 10, u = (((f % 100) - (f % 10)) / 10) + p;
			printf("%lu%lu%lu", (f - (f % 100)) / 100, u, k);
			printf("%lu", s % 10000000000);
				if (i != 97)
					printf(", ");
			}} else
				printf("%lu%lu, ", f, s);
		} else
		{printf("%lu, ", j), j = j + z, z = j - z;
		}} printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fibonacci_bignum();
	return (0);
}
