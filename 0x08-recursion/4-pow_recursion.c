#include "main.h"

/**
 * _pow_recursion - function returns the value of a number raised to the power
 * of another number.
 *
 * @x: base number
 * @y: index number
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}
