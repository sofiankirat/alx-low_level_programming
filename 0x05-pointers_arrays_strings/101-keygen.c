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
	int arr[1000], h = 0, count = 0, sum = 0;

	srand(time(NULL));
	char s[1000], k;

	for (int i = 0; i < 1000; i++)
		s[i] = 0;
	while (sum < 2677)
	{
		int num = rand();

		sprintf(s, "%d", num);
		for (int i = 0; s[i] != '\0'; i++)
		{
			sum += s[i];
			count++;
			if (sum >= 2677)
				break;
		}
		for (int i = 0; i < count; i++)
		{
			arr[h] = s[i];
			h++;
		}
		count = 0;
	}
	k = 2772 - sum;
	arr[h] = k;
	for (int i = 0; i <= h; i++)
		printf("%c", arr[i]);
	return (0);
}
