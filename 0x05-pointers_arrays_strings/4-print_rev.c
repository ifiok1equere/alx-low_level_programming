#include "main.h"
#include <string.h>

/**
 * print_rev - function prints a string in reverse followed by a new line.
 *
 * @s: pointer to type char string variable to be reverse-printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
