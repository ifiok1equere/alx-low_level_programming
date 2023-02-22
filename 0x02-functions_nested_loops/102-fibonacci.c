#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void fibonacci_50(void);

int main(void)
{
	fibonacci_50();
	return (0);
}

/**
 * fibonacci_50 - function prints the first 50 Fibonacci numbers.
 *
 * Return: void
 */
void fibonacci_50(void)
{
	long prev = 1, cur = 2, next, i = 1;

	printf("%ld, %ld, ", prev, cur);
	next = prev + cur;

	while (i <= 50)
	{
		prev = cur;
		cur = next;
		next = prev + cur;
		if (i < 50)
		{
			printf("%ld, ", next);
		}
		else
		{
			printf("%ld\n", next);
		}
		i++;
	}
}
