#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("size of a char: %d bytes(s)\n", sizeof(char));
printf("size of an init: %d byte(s)\n", sizeof(int));
printf("size of a long init: %d bytes(s)\n", sizeof(long));
printf("size of a long long init: %d bytes(s)\n", sizeof(long long));
printf("size of a float: %d bytes(s)\n", sizeof(float));
return (0);
}
