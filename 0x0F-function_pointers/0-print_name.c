#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function prints name
 * @name: 1st parameter of function which is the name to be printed
 * @f: 2nd parametr of function which is a function pointer.
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
