#include "holberton.h"

/**
 * _print_rev_recursion - writes a string in reverse
 * @s: Strings who receives
 *
 * Return: without return.
 */
void _print_rev_recursion(char *s)
{
	if (*(s) != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s));
	}
}
