/**
 * infinite_add - A function that adds two numbers.
 * @n1: A pointer to char that points to the first digit of the first number.
 * @n2: A pointer to char that points to the first digit of the second number.
 * @r: A pointer to char that points to the buffer where
 * the result will be stored.
 * @size_r: The buffer size.
 *
 * Return: A pointer to char that points to the string where
 * the resulting sum will be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{int i, c1 = -1, c2 = -1, sum = 0, t2 = 0, p = 1, counter = 0;
	char temp;

	for (i = 0; n1[i] != '\0'; i++)
		c1++;
	for (i = 0; n2[i] != '\0'; i++)
		c2++;
	for (i = 0; i < size_r; i++)
	{
		if (i == size_r - 1)
			return (0);
		if (c1 > -1 && c2 > -1)
			sum = (n1[c1] - 48) + (n2[c2] - 48);
		else if (c1 > -1)
			sum += (n1[c1] - 48);
		else if (c2 > -1)
			sum += (n2[c2] - 48);
		else
		{
			if (t2 == 1)
				r[i] = p + 48, counter++;
			break; }
		c1--, c2--;
		if (t2 == 1)
			t2 = 0, sum += 1;
		if (sum > 9)
		{t2 = 1;
			sum -= 10;
			r[i] = sum + 48;
			counter++;
			sum = 0; }
		else
		{r[i] = sum + 48;
			counter++;
			sum = 0; }}
	r[counter] = '\0';
	for (i = 0; i < counter / 2; i++)
	{temp = r[i];
		r[i] = r[counter - i - 1];
		r[counter - i - 1] = temp; }
		return (r); }
