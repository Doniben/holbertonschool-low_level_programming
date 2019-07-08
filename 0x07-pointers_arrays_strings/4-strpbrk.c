#include "holberton.h"

/**
 * _strpbrk - entry point
 * @s: array
 * @accept: second array
 * Return: to 0
 */

char *_strpbrk(char *s, char *accept)
{
	int fs, ss;

	for (fs = 0 ; s[fs] ; fs++)
	{
		for (ss = 0 ; accept[ss] ; ss++)
		{
			if (accept[ss] == s[fs])
				return (s + fs);
		}
	}
	return (0);
}
