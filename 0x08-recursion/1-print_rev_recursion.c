#include "main.h"
#include <string.h>

/**
  *_print_rev_recursion - function name
  *@s: only param
  *Return: nothing
  */


void _print_rev_recursion(char *s)
{
	unsigned int i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		i++;
		_print_rev_recursion(s + i);
		_putchar(*s);

	}

}

