#include "holberton.h"

/**
 * *_strncat - Concatenate two strings
 * @dest: String who receives
 * @src: Second string who receives
 * @n: The number of char that prints
 *
 * Return: On success.
 */
char *_strncat(char *dest, char *src, int n)
{
	int q = 0, x = 0;

	while (*(dest + q) != '\0')
	{
		q++;
	}
	while (x < n)
	{
		*(dest + q) = *(src + x);
		q++;
		x++;
	}
	return (dest);
}
