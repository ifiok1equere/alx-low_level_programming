#include "main.h"

/**
 * print_sign - function checks whether a number is +ve. -ve or 0
 * @n: integer parameter to be checked
 *
 * Return: returns interger
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
