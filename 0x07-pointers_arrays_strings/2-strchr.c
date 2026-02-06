#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 * @s: A pointer to char to the memory area s that contain the string.
 * @c: A character to search for.
 *
 * Return: A  pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0, index, t = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			t = 1;
			index = i;
			break;
		}
	}
	if (t == 1)
		return (&s[index]);
	else if (c == '\0')
		return (&s[i]);
	else
		return (NULL);
}
