/**
 * _strlen - compute the length of a string
 * @s: A pointer to char that contain the first character of the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
