/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: A pointer to char that contain
 * the original memory area of the string s.
 * @accept: A pointer to char to see how many characters at the start of s
 * consist only of characters found in accept.
 *
 * Return: The number of bytes in the initial segment of s,
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, c = 0, t = 0, t2 = 0;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				t = 1;
				c++;
				break;
			}
		}
		if (t == 1)
		{
			t = 0;
		}
		else
		{
			t2 = 1;
			break;
		}
	}
	if (t2 == 0)
	{
		c++;
	}
	return (c);
}
