#include "holberton.h"
/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int d, o;

	for (d = 0; d < 10; d++)
	{
		for (o = 0; o < 10; o++)
		{
			if (d * o > 9)
			{
				_putchar(' ');
				_putchar((d * o) % 10 + '0');
				_putchar(',');
				if (d * o <= '8')
				{
					_putchar(',');
				}
				if (d * o >= 9)
				{
					_putchar(' ');
				}
			}
			if (d * o >= 10)
			{
				_putchar((d * o) / 10 + '0');
				_putchar((d * o) % 10 + '0');
				if (o <= 8)
				{
					_putchar(',');
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
