#include <stdio.h>

/**
  *print_before_main - function to print before main
  *
  *Return: void
*/

void print_before_m(void) __attribute__ ((constructor));

void print_before_m(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
