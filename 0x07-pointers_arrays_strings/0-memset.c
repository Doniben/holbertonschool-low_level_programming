#include "holberton.h"

/**
 * _memset - entry point
 * @s: array done
 * @b: value
 * @n: unsigned int
 * Return: to the array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0 ; d < n ; d++)
	{
		s[d] = b;

	}
	return (s);
}

