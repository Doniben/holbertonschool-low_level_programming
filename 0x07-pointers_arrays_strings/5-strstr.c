#include "holberton.h"

/**
 * _strstr - entry point
 * Return: array
 * @haystack: array
 * @needle: second array
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (y = 0 ; needle[y] ; y++)
	{
		for (x = 0 ; haystack[x] ; x++)
		{
			if (haystack[x] == needle[y])
				return (haystack + x);
		}
	}
	return (0);
}
