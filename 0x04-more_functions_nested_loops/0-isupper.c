#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @l: character to check
 *
 * Return: 1 if c is uppercase
 *	   0 otherwise
 */
int _isupper(int l)
{
	if (l >= 65 && l <= 90)
		return (1);
	else
		return (0);
}
