#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - function prints n elements of an array of integers.
 *
 * @a: pointer to array whose items are to be printed.
 * @n: number of items to be printed.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
		printf("\n");

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
		i++;
	}
}
