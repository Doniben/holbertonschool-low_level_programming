#include "holberton.h"

/**
 * *_strcpy - copying a string pointed
 * @dest: receives the pointer
 * @src: pointer to copy
 *
 * Return: to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}
