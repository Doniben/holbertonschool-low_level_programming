#include "holberton.h"
/**
 *print_alphabet_x10 - Entry point
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char d;
	int y = 0;

	while (y <= 9)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
		y++;
	}
}
