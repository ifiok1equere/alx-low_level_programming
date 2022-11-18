#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
  *print_strings - printing function
  *@separator: para 1
  *@n: param 2
  *Return: return -1
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list all_them;
	char *p;

	va_start(all_them, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(all_them, char *);

		if (i < n - 1)
		{
			if (separator != NULL && p != NULL)
			{
				printf("%s%s", p, separator);
			}
			if (separator == NULL && p != NULL)
			{
				printf("%s", p);
			}
			if (separator != NULL && p == NULL)
			{
				printf("%s%s", "(nil)", separator);
			}
		}
		else
		{
			printf("%s", p);
		}
	}
	printf("%c", '\n');
	va_end(all_them);
}
