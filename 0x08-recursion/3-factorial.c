#include "main.h"

/**
 * factorial - function returns the factorial of a given number
 *
 * @n: number whose factorial is to be determined
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
