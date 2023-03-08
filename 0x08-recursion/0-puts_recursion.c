#include "main.h"
#include <string.h>

/**
 * _puts_recursion - function prints a string
 *
 * @s: pointer to the string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
