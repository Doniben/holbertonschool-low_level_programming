#include "holberton.h"

/**
 * print_line - Function to print a line.
 * @n: reference number to print the line
 *
 */

void print_line(int n)
{
	int a;

	while (a < n)
	{
		_putchar(95);
		a++;
	}
	_putchar(10);
}
