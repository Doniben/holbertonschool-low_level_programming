#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add
 *@argc: number of arguments
 *@argv: string with arguments
 * Return: 0 1
 */
int main(int argc, char *argv[])
{
	int sum, x, y;

	sum = 0;
	if (argc < 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!(isdigit(argv[x][y])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = atoi(argv[x]) + 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
