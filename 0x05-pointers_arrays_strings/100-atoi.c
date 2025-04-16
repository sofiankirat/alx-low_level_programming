/**
 * _atoi - convert a string to an integer.
 * @s: A pointer to char that contain the first character of the string.
 *
 * Return: The integer converted from the string.
 */

int _atoi(char *s)
{
	int dig, counter = 0, i = 1, num = 0, p = 1, c = 0, j = 1, minus_num = 0, t;

	while (*s != '\0')
	{
		if (*s >= 48 && *s <= 57)
		{
			t = *(s + 1);
			if ((t < 48 || t > 57) && t != 0)
			{
				c++;
				break;
			}
		}
		if (*s == 45)
			minus_num++;
		c++;
		s++;
	}
	if (*s == '\0')
		s--;
	while (j <= c)
	{
		if (*s >= 48 && *s <= 57)
		{
			dig = *s - 48;
			while (i <= counter)
			{
				p *= 10;
				i++;
			}
			if (minus_num % 2 != 0)
				num -= dig * p;
			else
				num += dig * p;
			counter++;
		}
		s--;
		j++;
	}
	return (num);
}
