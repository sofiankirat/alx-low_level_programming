/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: A pointer to char that will store the copy of the string.
 * @src: A pointer to char that contain the first character of the string.
 *
 * Return: Te pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, p;

	while (*src != '\0')
	{
		i++;
		src++;
	}
	p = i;
	while (i != 0)
	{
		i--;
		src--;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	while (p != 0)
	{
		dest--;
		p--;
	}
	return (dest);
}
