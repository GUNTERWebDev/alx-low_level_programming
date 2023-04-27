#include <stdio.h>

/**
  * premain - attribute is typically used to perform some
  * initialization tasks before the program starts
  * Return: void
  */
void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
