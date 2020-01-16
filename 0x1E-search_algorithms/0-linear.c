#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 * Return: returns the first index where value is locaded
 */

int linear_search(int *array, size_t size, int value)
{
	size_t elem = 0;
	if (!array)
		return (-1);
	for (elem = 0; elem <= size; elem++)
	{
		printf("Value checked array[%i] = [%i]", (int) elem, array[elem]);
		if (array[elem] == value)
			return (elem);
	}
	return (1);
}
