#include "main.h"
#include <stdio.h>

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

	i = _strlen(s) - 1;
	printf("%d\n", i);

	while (s[i] && i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
