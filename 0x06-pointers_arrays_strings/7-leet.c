/**
 * leet - A function that encodes a string into 1337.
 * @s: A pointer to char that points to the first character
 * of a null-terminated string.
 *
 * Return: A pointer to char that points to the first character
 * of the modified null-terminated string encoded in 1337.
 */

char *leet(char *s)
{
	int i, j;
	char c[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char d[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == c[i])
				s[j] = d[i];
		}
	}
	return (s);
}
