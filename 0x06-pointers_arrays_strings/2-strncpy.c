/**
 * _strncpy - This function copies the string pointed to by src,
 * to the buffer pointed to by dest.
 * Except that at most n bytes of src are copied.
 * @dest: A pointer to char that will store the copy of the string.
 * @src: A Pointer to char that represents the source string to copy from.
 * @n: Number of characters to copy at most from src.
 *
 * Return: The pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
