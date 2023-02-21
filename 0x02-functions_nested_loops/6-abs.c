#include "main.h"

/**
 * _abs - function computes the absolute value of a number
 * @n: integer parameter whose absolute value is to be computed
 *
 * Return: returns interger
 */

int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
