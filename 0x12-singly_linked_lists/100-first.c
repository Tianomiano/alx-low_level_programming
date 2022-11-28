#include <stdio.h>

/**
*print_str - allow execution before main
*/
void print_str(void) __attribute__ ((constructor));
/**
*print_str - implementation
*/
void print_str(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
