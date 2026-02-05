/**
 * _memcpy - A function that copies memory area.
 * @dest: A pointer to char that will receive the copies of n bytes
 * from memory area src.
 * @src: A pointer to char of memory area that contain the original
 * n bytes to copy in memory area dest.
 * @n: The number of bytes to copy in memory area dest.
 *
 * Return: A pointer to memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
