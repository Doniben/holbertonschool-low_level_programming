#include "holberton.h"
/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int d, o, n, i;

	for (d = '0'; d <= '2'; d++)
	{
		for (o = '0'; o <= '9'; o++)
		{
			if (d != '2' || o != '4')
			{
			for (n = '0'; n <= '5'; n++)
			{
				for (i = '0'; i <= '9'; i++)
				{
					if (d != '2' || o != '4')
					{
						_putchar(d);
						_putchar(o);
						_putchar(':');
						_putchar(n);
						_putchar(i);
						_putchar('\n');
					}
				}
			}
			}
			else
			{
				break;
			}
		}
	}
}
