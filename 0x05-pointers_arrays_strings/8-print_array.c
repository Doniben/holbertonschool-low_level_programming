#include <stdio.h>
#include "holberton.h"

/**
 * print_array - Print the numbers done by the arrays on the main
 * @a: The string that receives
 * @n: The size of the array
 *
 * Return: On success.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < (n - 1))
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
		i++;
	}
	printf("\n");
}
