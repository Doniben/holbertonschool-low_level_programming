#include "function_pointers.h"

/**
 * print_name - Function
 * @name: Name to call
 * @f: function pointed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
