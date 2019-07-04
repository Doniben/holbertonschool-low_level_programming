#include "holberton.h"

/**
 * *string_toupper - Uppercase a String
 * @s: The string to Uppercase
 *
 * Return: On success.
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (*(s + c))
	{
		if (*(s + c) >= 'a' && *(s + c) <= 'z')
			*(s + c) = (*(s + c) - 'a') + 'A';
		c++;
	}
	return (s);
}
