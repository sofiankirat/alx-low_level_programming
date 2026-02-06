#include "main.h"

/**
 * _strstr - A function that locates a substring.
 * @haystack: A pointer to char that contain the original string
 * to find if the substring exists.
 * @needle: A pointer to char that contain the substring
 * in the string haystack.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j, index, t = 0, k;

	for (; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				index = i;
				i++;
				for (k = j + 1; needle[k] != '\0'; k++)
				{
					if (needle[k] != haystack[i])
					{
						t = 1;
						break;
					}
					i++;
				}
				if (t == 0)
					return (&haystack[index]);
				t = 0;
				i = index;
			}
		}
	}
	return (NULL);
}
