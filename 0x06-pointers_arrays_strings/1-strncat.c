/**
 * _strncat - This function appends the src string to the dest string.
 * It will use at most n bytes from src.
 * @dest: A pointer to char that will store the concatenated string.
 * @src: A pointer to char that stores the string to be appended.
 * @n: Number of bytes that will be appended from src to dest,
 * not including the terminating null byte.
 *
 * Return: The pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
		c++;
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[c] = src[i];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
