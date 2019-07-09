#include "holberton.h"

/**
 * calcul - Calculate the square root
 * @n: The number that receives
 * @i: The number that iterate
 * Return: On success 1.
 */
int calcul(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if (i > n / 2)
	{
		return (-1);
	}
	else
	{
		return (calcul(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Calculate the square root
 * @n: The number that receives
 * Return: On success 1.
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	return (calcul(n, i));
}
