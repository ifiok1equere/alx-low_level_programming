#include "main.h"

/**
  *swap_int - swapping func
  *@a: pointer parameter 1
  *@b: pointer parameter 2
  *Return: retuns void
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
