#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * binary_to_uint - conversion function
  * @b: pointer argument to string
  * Return: rerturns an unsigned integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, bit_num, j;
	int i;

	dec = i = j = 0;

	if (b == NULL)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		bit_num = b[i] - '0';

		if (bit_num > 9)
		{
			return (0);
		}
		else
		{
			dec = dec + (bit_num << j);
			j++;
		}
	}

	return (dec);
}
