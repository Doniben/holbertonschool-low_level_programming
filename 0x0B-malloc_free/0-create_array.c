#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - Function to create an array of chars, initializing it with a specific char
 * @size: Size of chars 
 * @c: specific chars
 * Return: to the 
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int des;

	if (size == 0)
	{
		return (NULL);
	}
	x = malloc(sizeof(char) * size);
	if (x == NULL)
	{
		return (NULL);
	}
	for (des = 0; des < size; ++des)
	{
		x[des] = c;
	}
	return (x);
}
