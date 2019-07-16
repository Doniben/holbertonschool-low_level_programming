#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridsal;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridsal = malloc(sizeof(int *) * height);
	if (gridsal == 0)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		gridsal[x] = malloc(sizeof(int) * width);
		if (gridsal[x] == NULL)
		{
			for (; x >= 0; x--)
				free(gridsal[x]);
			free(gridsal);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			gridsal[x][y] = 0;
	}
	return (gridsal);
}
