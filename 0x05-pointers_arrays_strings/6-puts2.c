#include "holberton.h"

/**
 * puts2 - Print only one character
 * @str: The string that receives
 *
 * Return: On success.
 */
void puts2(char *str)
{
	int x = 0;

	while (*(str + x))
	{
		if ((x % 2) == 0)
			_putchar(*(str + x));
		x++;
	}
	_putchar(10);
}
