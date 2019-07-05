#include "holberton.h"

/**
 * *cap_string - Capitalize
 * @s: The string that receives
 *
 * Return: On success.
 */
char *cap_string(char *s)
{
	int x = 0, k = 0;
	char *conditions = ", \t\n.;?\"(){}";

	while (s[x])
	{
		k = 0;
		while (conditions[k])
		{
			if (s[x] == conditions[k])
			{
				if (((*(s + (x + 1))) >= 'a' && (*(s + (x + 1))) <= 'z'))
				{
					*(s + (x + 1)) = *(s + (x + 1)) - 'a' + 'A';
				}
			}
			k++;
		}
		if (x == 0)
		{
			if (*(s + x) >= 'a' && *(s + x) <= 'z')
			{
				*(s + x) = *(s + x) - 'a' + 'A';
			}
		}
		x++;
	}
	return (s);
}
