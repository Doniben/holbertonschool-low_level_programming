#include "holberton.h"

/**
 * reset_to_98 - Changing the value of a variable
 * @n: Variable to chande
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;
}
