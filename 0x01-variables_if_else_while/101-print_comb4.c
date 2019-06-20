#include <stdio.h>
/**
 *main - Entry
 *
 *Return: Always 0 (Succes)
 */
int main(void)
{

	int x, y, z;

	for (x = '0'; x <= '7'; x++)
	{
		for (y = '1'; y <= '8'; y++)
		{
			for (z = '2'; z <= '9'; z++)
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
				if (x == '7' && y == '8' && z == '9')
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
