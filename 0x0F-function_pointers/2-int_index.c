#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array elements
 * @size: elements in the array
 * @cmp: pointer to the function - compare values
 * Return: to x if found elements, to -1 if doesn't found elements
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

		if (array != NULL && cmp != NULL)
			for (x = 0; x < size; x++)
				if (cmp(array[x]))
					return (x);
		return (-1);
}
