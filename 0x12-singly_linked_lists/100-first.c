#include <stdio.h>

void sent_first(void) __attribute__ ((constructor));

/**
  * sent_first - prints a sentence before main function
  */
void sent_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
