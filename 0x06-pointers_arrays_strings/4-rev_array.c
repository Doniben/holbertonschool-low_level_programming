#include "holberton.h"

/**
 * reverse_array - Reverse a string
 * @a: The string that receives
 * @n: The second string that receives
 *
 * Return: On success.
 */
void reverse_array(int *a, int n)
{
	int c = 0;
	int rev;
	n--;
	while (n > c)
	{
		rev = *(a + n);
		*(a + n) = *(a + c);
		*(a + c) = rev;
		n--;
		c++;
	}
}
