#include "holberton.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: to 0 if it is a big endian or 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *p = (char *) &i;

	if (p[0] == 1) /*"Little Endian*/
	{
		return (1);
	}
	else /*Big Endian*/
		return (0);
}
