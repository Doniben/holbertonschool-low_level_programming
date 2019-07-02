#include "holberton.h"

/**
* swap_int - Swap values of two integers
* @a: Character who receives.
* @b: Character who receives with c.
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
