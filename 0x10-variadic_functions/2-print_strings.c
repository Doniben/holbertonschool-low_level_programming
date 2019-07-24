#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - 
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int counter;
	char *strf;

	va_start(arg_ptr, n);
	for (counter = 0; counter < n; counter++)
	{
		strf = va_arg(arg_ptr, char *);
		if (strf != NULL)
			printf("%s", strf);
		else
			printf("%p", strf);
		if (separator != NULL && (counter + 1) != n)
			printf("%s", separator);
	}		
	printf("\n");
	va_end(arg_ptr);
}
