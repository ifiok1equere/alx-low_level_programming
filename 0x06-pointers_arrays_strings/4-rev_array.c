#include "main.h"
#include <string.h>

/**
 * reverse_array - function reverses an array.
 *
 * @a: this is the pointer to the array to be reversed.
 * @n: the number of elements in the array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *p;
	int temp, j, i = 0;

	p = a;
	n = n - 1;
	if (n % 2 == 0)
	{
		j = n / 2;
	}
	else
	{
		j = n - 1 / 2;
	}

	while (i <= j)
	{
		temp = a[i];
		a[i] = p[n];
		a[n] = temp;

		n--;
		i++;
	}
}
