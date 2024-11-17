#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: A pointer to a string , the buffer that will store the string
 * @src: A pointer to a string , where the string will be copied
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = *src;
	dest = dest - i;
	return (dest);
}
