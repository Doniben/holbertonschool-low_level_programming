#include "holberton.h"

/**
 * print_triangle - Function to print a triangle.
 * @size: variable triangle.
 * Return - without return.
 */

void print_triangle(int size)
{
	int d, o;

	if (size > 0)
	{
		for (d = 0; d < size; d++)
		{
			for (o = 0; o < size; o++)
				if (o < size - (d + 1))
				{
					_putchar(' ');
				}
				else
					_putchar('#');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
