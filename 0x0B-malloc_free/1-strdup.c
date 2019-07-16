#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *strsal;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;
	strsal = (char *)malloc(sizeof(char) * x);

	if (strsal == NULL)
		return (NULL);

	for (y = 0; y <= x; y++)
		strsal[y] = str[y];

	return (strsal);
}
