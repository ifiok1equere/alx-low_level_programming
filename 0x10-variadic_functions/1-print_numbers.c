#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function prints numbers
 * @separator: parameter representing the string to be printed
 * between numbers
 * @n: parameter representing the number of arguments to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (n == 0)
		return;

	if (separator == NULL)
		return;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, unsigned int));
		printf("%c", *separator);
		if (i == n - 2)
		{
			printf("%d", va_arg(arg, unsigned int));
			va_end(arg);
			printf("\n");
			break;
		}
	}
}
