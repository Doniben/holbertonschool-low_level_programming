#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the calc
 * @argc: argument
 * @argv: second value
 * Return: Return to 0.
 */

int main(int argc, char *argv[])
{
	int oper;
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oper = get_op_func(argv[2])(num1, num2);
	printf("%d\n", oper);
	return (0);
}
