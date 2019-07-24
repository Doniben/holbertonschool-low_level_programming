#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function to addition.
 * @a: adding up
 * @b: second adding up
 * Return: return the result.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substration
 * @a: first number
 * @b: minuend
 * Return: return the substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply function
 * @a: first multiple
 * @b: second multiple
 * Return: return the multiplication result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: division quotien
 * @b: divident
 * Return: return the division result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module function
 * @a: first number to modulate
 * @b: modulator
 * Return: return to the modulation
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
