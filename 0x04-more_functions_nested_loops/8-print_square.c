#include "main.h"
/**
 * print_square - function prints a sqaure of n size
 * @size:parameter detailing size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < size)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
