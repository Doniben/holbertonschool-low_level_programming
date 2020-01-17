#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: Return index where value is located.-1 if there is not array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1, m;
	int i = 0;

	if (!array)
		return (-1);

	while (L <= R)
	{
		i = (R + L) / 2;
		printf("Searching in array: ");
		for (m = L; m <= R; m++)
		{
			if (m < R)
				printf("%i, ", array[m]);
			else
				printf("%i\n", array[m]);
		}
		if (array[i] < value)
			L = i + 1;
		else if (array[i] > value)
			R = i - 1;
		else
			return (i);
	}
	return (-1);
}
