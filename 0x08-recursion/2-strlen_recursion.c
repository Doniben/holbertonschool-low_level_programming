#include "holberton.h"

/**
 * _print_rev_recursion - return the lenght of a string.
 * @s: String who receives
 *
 * Return: Always to 0.
 */
int _strlen_recursion(char *s)
{
	if (*(s) != 0)
	{
		return(1 + _strlen_recursion(s + 1));
	}
	else
	{
		return(0);
	}
}
