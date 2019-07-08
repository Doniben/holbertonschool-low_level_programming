#include "holberton.h"

/**
 * _strspn - entry point
 * Return: array
 * @s: array
 * @accept: second array
 * Return; to
 */

unsigned int _strspn(char *s, char *accept)
{
	int d;
	int o;
	int niben;

	for (d = 0; s[d]; d++)
	{
		for (o = 0; accept[o]; o++)
			if (s[d] == accept[o])
			{
				niben++;
			}
		if (s[d] == ' ')
			break;
	}
	return (niben);
}
