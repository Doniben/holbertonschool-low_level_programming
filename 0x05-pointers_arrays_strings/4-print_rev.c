#include "holberton.h"

/**
 * print_rev - Print a string in reverse followed a new line
 * @s: The string that receives
 * Return: On success 1.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;
	while (count--)
	{
		_putchar(*(s + count));
	}
	_putchar(10);
}
