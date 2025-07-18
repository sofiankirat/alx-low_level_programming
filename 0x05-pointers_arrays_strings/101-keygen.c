#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random passwords
 *
 * Return: Always 0.
 */
int main(void)
{
	int arr[1000], h = 0, count = 0, sum = 0, i = 0;

	char s[1000], k;

	srand(time(NULL));

	while (i < 1000)
	{
		s[i] = 0;
		i++;
	}
	i = 0;
	while (sum < 2677)
	{
		int num = rand();

		sprintf(s, "%d", num);
		while (s[i] != '\0')
		{
			sum += s[i];
			count++;
			if (sum >= 2677)
				break;
			i++;
		} i = 0;
		while (i < count)
		{
			arr[h] = s[i];
			h++;
			i++;
		} count = 0;
		i = 0;
	} k = 2772 - sum;
	arr[h] = k;
	while (i <= h)
	{
		printf("%c", arr[i]);
		i++;
	} return (0);
}
