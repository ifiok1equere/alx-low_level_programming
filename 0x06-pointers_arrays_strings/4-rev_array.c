#include "main.h"
#include <string.h>

/**
  *reverse_array - reverse engineering
  *@a: 1st parameter
  *@n: 2nd parameter
  *Return: always nothing
*/

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int temp;

	for (i = n - 1; i > n / 2; i--)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		j++;
	}
}
