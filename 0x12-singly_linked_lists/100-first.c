#include <stdio.h>

void my_initializer(void) __attribute__ ((constructor));

/**
* my_initializer - a function executed before main
*/
void my_initializer(void)
{
	printf("Before main: Initializing something...\n");
	printf("Hello from my_initializer!\n");
}

