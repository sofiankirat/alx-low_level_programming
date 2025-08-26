#include "main.h"

/**
 * print_buffer - A function that prints a buffer.
 * @b: A pointer to char that points to the buffer to be printed.
 * @size: An integer that represents the size of the buffer in bytes.
 *
 * Return: This function returns no value (void).
 */

void print_buffer(char *b, int size)
{
	int i, k, t1 = 1, t2 = 0, count = 0, j = 0, l = 10, space = 25;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i++)
	{
		if (t1 == 1)
		{t1 = 0;
			printf("%08x: ", i); }
		printf("%02x", b[i]);
		count++;
		if (t2 == 1)
		{printf(" ");
			t2 = 0; }
		else
			t2++;
		if (i == size - 1 && count < 10)
		{
			space -= (count * 2) + (count / 2);
			for (k = 1; k <= space; k++)
				printf(" ");
		}
		if (count == 10 || size - 1 == i)
		{
			for (; j < l && j < size; j++)
			{
				if (b[j] >= 32 && b[j] <= 126)
					printf("%c", b[j]);
				else
					printf(".");
			}
			l += 10;
			printf("\n");
			count = 0, t1 = 1;
		}
	}
}
