#include "main.h"
/**
 * print_alphabet - function prints lowercase alphabets in reverse
 *@void: no parameters needed for function output
 *
 * Return: returns void
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
