#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
  *sum_them_all - summing function
  *@n: param 1
  *Return: return 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list all_them;

	va_start (all_them, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg (all_them, int);
	}

	va_end(all_them);

	return (sum);
}
