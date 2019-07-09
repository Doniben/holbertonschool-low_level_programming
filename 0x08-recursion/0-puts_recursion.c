#include "holberton.h"

/**
 * _puts_recursion - writes the character c to stdout
 * @s: String who receives
 *
 * Return: without return.
 */
void _puts_recursion(char *s)
{
	if (*(s) != 0)
	{
		_putchar(*(s));
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
