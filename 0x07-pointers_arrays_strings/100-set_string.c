/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: A pointer to a pointer to char that contain the first string.
 * @to: A pointer to char that contain the second string.
 *
 * Return: This function returns no value (void).
 */

void set_string(char **s, char *to)
{
	*s = to;
}
