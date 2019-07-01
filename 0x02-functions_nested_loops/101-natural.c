#include <stdio.h>

/**
 * main - Entry point.
 * x, suma, mody, modz - variables.
 *
 * Return: Always to 0.
 */

int main(void)
{
	int x, suma, mody, modz;

	for (x = 0; x < 1024; x++)
	{
		mody = x % 3;
		modz = x % 5;
		if (mody == 0 && modz == 0)
		{
			suma = suma + x;
		}
	}
	printf("%d\n", suma);
	return (0);
}
