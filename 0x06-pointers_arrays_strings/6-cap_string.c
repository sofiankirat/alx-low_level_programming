/**
 * cap_string - A function that capitalizes all words of a string.
 * @s: A pointer to char that points to the first character
 * of a null-terminated string.
 *
 * Return: A pointer to char that points to the first character
 * of the modified null-terminated string with all words capitalized.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ','
|| s[i] == '.' || s[i] == ';' || s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
&& s[i + 1] != '\0' && s[i + 1] >= 97 && s[i + 1] <= 122)
			s[i + 1] -= 32;
	}

	return (s);
}
