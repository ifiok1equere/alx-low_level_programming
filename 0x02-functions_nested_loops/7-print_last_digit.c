#include "main.h"

/**
  *print_last_digit - last digit function
  *@a: parameter
  *Description - function prints last digit
  *Return: Always 0
  */

int print_last_digit(int a)
{
	int x;

	x = a % 10;
	if (x < 0)
	{
		x = x * -1;
	}

	_putchar(x + '0');
	return (x);
}
