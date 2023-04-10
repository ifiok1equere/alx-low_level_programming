#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function converts a binary number to a uint
 * @b: string literal to be converted
 *
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, u_int = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		i++;
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		u_int = (u_int * 2) + (b[i] - '0');
	}
	return (u_int);
}
