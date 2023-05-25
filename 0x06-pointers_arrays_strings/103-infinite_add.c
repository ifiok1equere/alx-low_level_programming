#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * infinite_add - function adds two numbers.
 *
 * @n1: number 1
 * @n2: number 2
 * @r: buffer to store the addition result
 * @size_r: buffer size
 *
 * Return: pointer to the addition result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned long int x, y, z;
	char a[];

	x = atol(n1);
	y = atol(n2);

	z = x + y;

	sprintf(a, "%ld", z);

	r = a;

	return (r);
}
