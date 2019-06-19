#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int x;
for (ch = '0'; ch <= '9'; ch++)
{
	
	for (x = '0'; x <= '9'; x++)
	{
		putchar(ch);
		putchar(x);
		if (x == '9' && ch == '9')
		{
		}
		else
		{ 
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
