/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: A pointer to char that contain
 * the original memory area of the string s.
 * @accept: A pointer to char to see how many character in this memory area
 * exist in memory area s.
 *
 * Return: The number of bytes in the initial segment of s,
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, c = 0, t = 0;

	for (; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				c++;
				break;
			}
		}
	}
	while (t == 0)
	{
		if (s[j] == accept[i])
		{
			c++;
			break;
		}
		if (s[j] == '\0')
		{
			break;
		}
		j++;
	}
	return (c);
}
