/**
 * rev_string - reverses a string
 * @s: A pointer to char That contain the first character of the array
 *
 * Return: This function returns no value (void)
 */

void rev_string(char *s)
{
	int c = 0, n, p;
	char z;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	p = c - 1;
	n = c / 2;
	while (c != 0)
	{
		s--;
		c--;
	}
	while (c < n)
	{
		z = s[c];
		s[c] = s[p];
		s[p] = z;
		c++;
		p--;
	}
}
