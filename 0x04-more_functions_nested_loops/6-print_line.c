#include "main.h"
/**
 * print_line - function prints n number of lines
 * @n:parameter detailing how many times lines are to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	long int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i  < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
