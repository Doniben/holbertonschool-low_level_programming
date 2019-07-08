#include "holberton.h"

/**
 * _memcpy - entry point
 * @dest: array
 * @src: value
 * @n: int
 * Return; to the array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0 ; d < n ; d++)
	{
		*(dest +d) = *(src + d);

	}
	return (dest);
}

