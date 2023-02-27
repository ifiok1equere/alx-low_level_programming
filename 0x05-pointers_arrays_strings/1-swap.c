#include "main.h"

/**
 * swap_int - function swaps the values of to arguments
 *
 * @a: pointer to integer variable
 * @b: pointer to integer variable
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
