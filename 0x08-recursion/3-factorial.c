#include "main.h"
#include <stdio.h>

/**
  *factorial - code for fact
  *@n: only param
  * Return: integer
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	
	return (n * factorial(n -1));
}
