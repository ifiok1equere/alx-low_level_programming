#include "main.h"

/**
 * print_number - function prints numbers with _putchar only
 * @n: parameter describes number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');

}
