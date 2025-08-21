/**
 * string_toupper - A function that changes all lowercase letters
 * of a string to uppercase.
 * @s: Pointer to char that points to the first character
 * of a null-terminated string.
 *
 * Return: A pointer to char that points to the first character
 * of an uppercase null-terminated string.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
