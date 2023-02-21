#include "main.h"
#include <inttypes.h>
#include <stdlib.h>

/**
 * print_last_digit - function prints last digit of a number
 * @n: integer function parameter
 *
 * Return: returns interger
 */
int _abs(int n);
int print_last_digit(int n)
{
	long int m;

	if (n < 0)
	{
		m = llabs(n);
		m = m % 10;
		_putchar(m + '0');
		return (m);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		m = n % 10;
		_putchar(m + '0');
		return (m);
	}
}


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
