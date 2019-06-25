#include "holberton.h"

/**
 * print_square - Function to print a square.
 * @size: Variable to print the square.
 *
 */

void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}
