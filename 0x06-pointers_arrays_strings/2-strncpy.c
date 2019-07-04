#include "holberton.h"

/**
 * *_strncpy - Copy one string
 * @dest: First string who receives
 * @src: Second string who receives
 * @n: Number of char that will be printed
 *
 * Return: On success.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
