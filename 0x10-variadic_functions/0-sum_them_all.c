#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: arguments
 *
 * Return: to the sum variable
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int count, total = 0;

	if (n == 0)
		return (0);
	va_start(arg_ptr, n);
		for (count = 0; count < n; count++)
			total += va_arg(arg_ptr, int);
	va_end(arg_ptr);
	return (total);
}
