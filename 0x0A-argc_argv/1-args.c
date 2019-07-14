#include <stdio.h>

/**
 * main - prints the number of arguments.
 * @argc: number of command line to count
 * @argv: Another argument
 * Return: Always to 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", --argc);
	return (0);
	(void)argv;
}
