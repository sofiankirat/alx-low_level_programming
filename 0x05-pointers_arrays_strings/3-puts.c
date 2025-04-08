/**
 * _puts - prints a string
 * @str: A pointer to char that contain the first character of the string
 *
 * Return: This function returns no value (void)
 */
#include "main.h"
void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str);
                str++;
        }
}
