#include "holberton.h"

/**
 * rev_string - Print a string in reverse followed a new line
 * @s: The string that receives
 *
 * Return: On success
 */
void rev_string(char *s)
{
	int i = 0, o = 0;
	char changer;

	while (*(s + o))
		o++;
	--o;
	while (i < o)
	{
		changer = *(s + o);
		*(s + o) = *(s + i);
		*(s + i) = changer;
		i++;
		--o;
	}
}
