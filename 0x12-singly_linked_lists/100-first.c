#include <stdio.h>

/**
 * first - Entry point
 */
void first()__attribute__((constructor));
void first()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
