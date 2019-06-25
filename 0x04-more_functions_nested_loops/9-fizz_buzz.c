#include <stdio.h>

/**
 * main - entry point.
 * Return: Always 0.
 */

int main(void)
{
	int s;

	for (s = 1; s <= 100; s++)
	{
		if ((s % 3 == 0) && (s % 5 != 0))
			printf("Fizz ");
		if ((s % 3 != 0) && (s % 5 == 0 && s != 100))
			printf("Buzz ");
		if ((s % 3 == 0) && (s % 5 == 0))
			printf("FizzBuzz ");
		if ((s % 3 != 0) && (s % 5 != 0))
			printf("%d ", s);
		if ((s % 3 != 0) && (s % 5 == 0) && (s == 100))
			printf("Buzz");
	}
	printf("\n");
	return (0);
}
