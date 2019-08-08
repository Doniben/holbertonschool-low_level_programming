#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: value
 * @index: position of the bit given
 * Return: the bit index return
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	else
		return (n >> index & 1);
}
