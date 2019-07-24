#include "3-calc.h"
#include <stdio.h>

/**
 * *get_op_func - function to find the operator
 * @s: operator to pass as argument
 *
 * Return: 0 if if there will be nor elements.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *(s + 0) && *(s + 1) == '\0')
			return (ops[i].f);
	i++;
	}
	printf("Error\n");
	exit(99);
	return (0);
}
