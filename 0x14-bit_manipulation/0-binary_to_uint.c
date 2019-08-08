#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 * Return: to the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int aldoni;

	if (b == NULL)
		return (0);

	aldoni = 0;
	while (*b)
	{
		if (*b == 1)
			aldoni = aldoni * 2;
		else if (*b == 0)
			aldoni = aldoni * 2;
		else
			return (0);
		b++;
	}
	return (aldoni);
}
