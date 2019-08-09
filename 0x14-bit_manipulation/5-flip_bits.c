#include "holberton.h"

/**
 * flip_bits
 * @n: value
 * @m: position
 * Return: to the counter.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int kalkulilo = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor)
	{
		if ((xor & 1) == 1)
			kalkulilo++;
		xor >>= 1;
	}
	return (kalkulilo);
}
