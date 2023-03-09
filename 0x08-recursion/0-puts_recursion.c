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
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}
