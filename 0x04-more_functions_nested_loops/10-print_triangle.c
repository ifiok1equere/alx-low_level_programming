#include "main.h"
/**
 * print_triangle - function prints a triangle of size n
 * @size:parameter detailing size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0, j = 0, k = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < size)
	{
		while (j < size - i - 1)
		{
			_putchar(' ');
			j++;
		}
		while (k < size - j)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		j = 0;
		k = 0;
		i++;
	}
}
