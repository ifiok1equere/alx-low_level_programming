#include "main.h"
#include <string.h>

/**
  *_puts_recursion - function name
  *@s: only param
  *Return: nothing
  */


void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return ;
	}
	else
	{
		_putchar(*s);
		i++;
		_puts_recursion(s + i);
	}

}

