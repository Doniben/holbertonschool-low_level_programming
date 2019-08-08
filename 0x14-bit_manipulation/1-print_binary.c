#include "holberton.h"

/**
 *
 *
 *
 */

void print_binary(unsigned long int n)
{
	int bin;
	if (n > 0)
	{
		bin = n >> 1;
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
