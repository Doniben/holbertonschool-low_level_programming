#include "holberton.h"

/**
* print_alphabet - Entry point
* Return: Always 0.
*/

void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
