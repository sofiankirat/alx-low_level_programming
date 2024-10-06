#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: A pointer to a string, where the string will be printed in reverse
 *
 * Return: This function returns no value (void)
 */
void rev_string(char *s)
{
	int i = 0, j = 1, k;
	char x;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	s--;
	k = i;
	while (j <= k / 2)
	{
		x = *s;
		*s = *(s - (i - 1));
		*(s - (i - 1)) = x;
		s--;
		j++;
		i -= 2;
	}
}
