#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplies arguments
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: Always return to 0 on succeess
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);

}
