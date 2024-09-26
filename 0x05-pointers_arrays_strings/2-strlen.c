#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: A pointer to a string which the length will be computed
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int sum = 0, i = 1;

	for (; *s != '\0';)
	{
		sum += i;
		s++;
	}
	return (sum);
}
