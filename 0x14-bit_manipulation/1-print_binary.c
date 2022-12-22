#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * print_binary - conversion function
  * @n: decimal number to be converted
  * Return: returns nothing
*/


void print_binary(unsigned long int n)
{
	unsigned long int dec_num, rem;

	/*num = 1;
	bin_num = 0;*/

	if (n == 0)
	{
		printf("%lu", n);
		return;
	}

	while (n > 0)
	{
		dec_num = n >> 1;
		rem = n - (dec_num << 1);
		/*bin_num = bin_num + (rem * num);
		num = num * 10;*/
		printf("%lu", rem);

		n = n >> 1;
	}

	/*printf("%lu", bin_num);*/
}
