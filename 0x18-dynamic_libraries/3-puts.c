#include "main.h"

/**
 * _puts - function prints a string followed by a new line to stdout
 *
 * @str: pointer to type char string variable to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
