/**
 * _strcat - This function appends the src string to the dest string.
 * @dest: A pointer to char that will store the concatenated string.
 * @src: A pointer to char that stores the string to be appended.
 *
 * Return: The pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int c = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
		c++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[c] = src[i];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
