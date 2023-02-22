#include <stdio.h>
#include "main.h"
/**
 * print_times_table - function prints the 9-times table
 * @n: parameter representing times table to be printed
 * Return: nothing as a void function.
 */
void print_times_table(int n)
{
	int i = 0, j = 0, k;

	while (i <= n)
	{
		while (j <= n)
		{
			k = i * j;
			if ((k <= n) && ((i * (j + 1)) <= n))
			{
				printf("%d", k);
				if (j  != n)
				{
					printf(",  ");
				}
			}
			else
			{
				printf("%d", k);
				if (j < n)
				{
					printf(", ");
				}
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
