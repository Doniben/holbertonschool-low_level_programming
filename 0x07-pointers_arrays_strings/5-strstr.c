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
	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;
		while (*haystack && *b && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return a;
		haystack = a + 1;
	}
	return (0);
}
