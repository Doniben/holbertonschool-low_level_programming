#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: 3th value
 * Return: to the pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strsal;
	unsigned int ls1, ls2, lsal, con;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		(s2 = "");

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsal = ls1 + n;

	strsal = malloc(lsal + 1);

	if (strsal == NULL)
		return (NULL);

	for (con = 0; con < lsal; con++)
		if (con < ls1)
			strsal[con] = s1[con];
		else
			strsal[con] = s2[con - ls1];

	strsal[con] = '\0';

	return (strsal);
}
