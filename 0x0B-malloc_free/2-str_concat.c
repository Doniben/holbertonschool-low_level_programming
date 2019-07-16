#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - Concatenates two in a new space of memory
 * @s1: first string
 * @s2: String concatenated
 * Return: to the new position in memory by the pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, z, y;
	char *tra;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	tra = malloc(sizeof(char) * (len1 + len2));

	if (tra == '\0')
		return (NULL);

	for (z = 0; s1[z] != '\0'; z++)
		tra[z] = s1[z];

	for (y = 0; s2[y] != '\0'; y++)
	{
		tra[z] = s2[y];
		z++;
	}
	return (tra);
}
