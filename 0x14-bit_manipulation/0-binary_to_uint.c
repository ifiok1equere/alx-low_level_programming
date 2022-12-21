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
	unsigned int dec, bin_num, bit_num, j, k, index;
	int i, l;

	dec = index = i = j = k = l = 0;

	if (b == NULL)
		return (0);

	bin_num = atoi(b);

	while (bin_num > 0)
	{
		k++;
		bin_num = bin_num / 10;
	}
	while (b[j] != '\0')
	{
		if (b[j] == '1')
		{
			index = j;
			break;
		}
		j++;
	}
	if (strlen(b) - index != k)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		bit_num = b[i] - '0';
		dec = dec + (bit_num << l);
		l++;
	}
	return (dec);
}
