#include "main.h"

/**
  *_sqrt_recursion - square root function
  *@n: only param
  *Return: returns an integer
*/

int increment(int, int);

int _sqrt_recursion(int n)
{
	int m = 1;

	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	
	return increment(m, n);
}


int increment(int m, int n)
{
	if (m * m == n)
	{
		return (m);
	}
	else
	{
		if (m <= n/2)
		{
			return (increment(m + 1, n));
		}
		else
		{
			return (-1);
		}
	}
}
