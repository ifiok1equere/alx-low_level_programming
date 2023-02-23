#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void fibonacci_98(void);

int main(void)
{
	fibonacci_98();
	return (0);
}

/**
 * fibonacci_98 - function prints the first 98 Fibonacci numbers.
 *
 * Return: void
 */
void fibonacci_98(void)
{
	unsigned long int prev = 1, cur = 2, next = 0, i = 1;

	next = prev + cur;
	printf("%lu, %lu, %lu, ", prev, cur, next);

	while (i < 96)
	{
		prev = cur;
		cur = next;
		next = prev + cur;
		if (i < 95)
		{
			printf("%lu, ", next);
		}
		else
		{
			printf("%lu\n", next);
		}
		i++;
	}
}
