#include "holberton.h"

/**
 * _atoi - copying a string pointed
 * @s: receives the point.
 *
 * Return: to dest.
 */
int _atoi(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		*(s + i) = *(s + i);
		i++;
	}
	return (*s);
}
