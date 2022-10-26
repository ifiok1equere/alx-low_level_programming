#include "main.h"

/**
   * print_array - comma printing
    *@a: param1
    *@n: param2
    *Return: Always nothing
*/

void print_array(int *a, int n)
{
	int j = 0;

	for (j = 0; j <= n - 1; j++)
	{
		printf("%d", a[j]);

		if (j < n - 1)
		{
			printf("%s", ",");
			printf("%s", " ");
		}
	}

	printf("%c", '\n');
}
