#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: 
 *
 *
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
