#include "holberton.h"

/**
 * _puts - Write a string with a new line
 * @str: The string that receives
 * Return: On success 1.
 */
void _puts(char *str)
{
	int count = 0;

	while (*(str + count))
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar(10);
}
