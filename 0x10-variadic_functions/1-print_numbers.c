#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between the numbers
 * @n: numbers of integers passed from the main
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int counter;

	va_start(arg_ptr, n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(arg_ptr, int));
		if ((counter + 1) != n)
			if (separator != NULL)
				printf("%s", separator);
	}
	va_end(arg_ptr);
	printf("\n");
}
