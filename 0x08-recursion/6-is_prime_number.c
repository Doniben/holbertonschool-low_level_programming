#include "holberton.h"

/**
 * calcul - Calculate the square root
 * @n: The number that receives
 * Return: On success 1.
 */
int calcul(int n)
{
	int i = 1;

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
		return (calcul(i + 1));
	}
}

/**
 * is_prime_number - Calculate the square root
 * @n: The number that receives
 * Return: On success 1.
 */

int is_prime_number(int n)
{
	int i = 1;

	return (calcul(n + i));
}
