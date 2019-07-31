#include <stdio.h>

/**
 * first - Entry point
 */
void first(void)__attribute__((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
