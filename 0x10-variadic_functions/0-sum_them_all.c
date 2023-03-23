#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function returns the sum of all parameters
 * @n: parameter representing the number of arguments to be summed
 *
 * Return: an integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);


	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, unsigned int);
	}
	va_end(arg);

	return (sum);
}
