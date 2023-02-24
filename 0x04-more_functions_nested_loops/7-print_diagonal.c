#include "main.h"
/**
 * print_diagonal - function prints n number of diagonals
 * @n:parameter detailing how many times diagonals are to be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		j = 0;
		i++;
	}
}
