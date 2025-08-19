/**
 * _strcmp - This function compares two strings.
 * @s1: A pointer to char that contains the first string to compare.
 * @s2: A pointer to char that contains the second string to compare.
 *
 * Return: An integer less than, equal to, or greater than zero.
 *		< 0  if s1 is found to be less than s2.
 *		= 0  if s1 is equal to s2.
 *		> 0  if s1 is found to be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, t = 1;

	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			t = 1;
			break;
		}
		else if (s1[i] < s2[i])
		{
			t = -1;
			break;
		}
		else
		{
			t = 0;
			continue;
		}
	}
	return (t);
}
