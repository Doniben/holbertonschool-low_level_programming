#include "holberton.h"

/**
 * _isupper - Uppercase checker.
 * @c: variable to be checked.
 * Return: to 1 if uppercase.
 */

int _isupper(int c)
{
	if (c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
