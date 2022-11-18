#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
  *print_numbers - printing function
  *@separator: para 1
  *@n: param 2
  *Return: return -1
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list all_them;

	va_start(all_them, n);

	if (n == 0)
		;
	else
	{

		for (i = 0; i < n; i++)
		{
			if (separator != NULL)
			{
				if (i < n - 1)
				{
					printf("%d%s", va_arg(all_them, int), separator);
				}
				else
				{
					printf("%d", va_arg(all_them, int));
				}
			}
			else
			{
				printf("%d", va_arg(all_them, int));
			}
		}
			printf("%c", '\n');
	}

	va_end(all_them);
}
