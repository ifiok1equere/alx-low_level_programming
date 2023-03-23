#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function prints strings
 * @separator: parameter representing the string to be printed
 * between strings
 * @n: parameter representing the number of arguments to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *ptr;

	if (n <= 0)
	{
		va_end(arg);
		return;
	}

	va_start(arg, n);


	for (i = 0; i < n; i++)
	{
		ptr =  va_arg(arg, char *);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{

			printf("%s", ptr);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
		if (i == (n - 1))
		{
			printf("\n");
			va_end(arg);
		}
	}
}
