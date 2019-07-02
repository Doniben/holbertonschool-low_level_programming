#include "holberton.h"

/**
* swap_int - Swap values of two integers
*@a: Character who receives.
*
*@b; Character who receives.
*
* Return: On success.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
