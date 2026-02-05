/**
 * _memset - A function that fills memory with a constant byte.
 * @s: A pointer to char that points to the first character in the memory area.
 * @b: A character to fill the first n bytes of the memory area.
 * @n: The number of bytes to fill with the character b.
 *
 * Return: The pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
