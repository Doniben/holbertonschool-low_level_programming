#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: double pointer
 * Return: Always 0 on Success
 */
int main(int argc, char **argv)
{
	int x = 0;

	x = argc;

	printf("%s\n", argv[x - 1]);
	return (0);
}
