/**
 * rot13 - A function that encodes a string using rot13.
 * @s:  A pointer to char that points to the first character
 * of a null-terminated string.
 *
 * Return: A pointer to char that points to the first character
 * of the modified null-terminated string encoded with ROT13.
 */

char *rot13(char *s)
{
	int i, j;
	char c1[52] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F',
'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N',
'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V',
'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z'};
	char c2[52] = {'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S',
's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z', 'A',
'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h', 'I',
'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c1[j] == s[i])
			{
				s[i] = c2[j];
				break;
			}
		}
	}
	return (s);
}
