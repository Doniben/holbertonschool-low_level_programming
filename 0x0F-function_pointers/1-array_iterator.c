#include "function_pointers.h"

/**
 * array_iterator - iterator
 * @array: pointer
 * @size: array
 * @action: pointer to the function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
		if (size && array && action)
			for (x = 0; x < size; x++)
				action(array[x]);
}
