#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function prints a string in reverse
 *
 * @s: pointer to the string to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);

}
