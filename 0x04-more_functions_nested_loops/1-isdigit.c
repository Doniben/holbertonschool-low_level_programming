#include "holberton.h"

/**
 * _isdigit - Digit checker.
 * @c: variable to be checked.
 * Return: to 1 if digit.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
