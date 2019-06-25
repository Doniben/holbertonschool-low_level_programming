#include "holberton.h"

/**
 * print_diagonal - Function to print a diagonal.
 * @n: variable to print the diagonal.
 *
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar(10);
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			if (a == b)
			{
				_putchar(92);
				break;
			}
			else
			_putchar(32);
		}
		_putchar(10);
	}
}
