#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: value
 * @m: position
 * Return: to the counter.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int kalkulilo;
	unsigned long int xor;

	xor = n ^ m;

	kalkulilo = 0;
	while (xor)
	{
		if ((xor & 1) == 1)
			kalkulilo++;
		xor >>= 1;
	}
	return (kalkulilo);
}
