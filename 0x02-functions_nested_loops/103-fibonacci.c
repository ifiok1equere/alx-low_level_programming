#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void fibonacci_even_sum(void);

int main(void)
{
	fibonacci_even_sum();
	return (0);
}

/**
 * fibonacci_even_sum - function computes sum of even numbers in f.series.
 *
 * Return: void
 */
void fibonacci_even_sum(void)
{
	long prev = 1, cur = 2, next, even, max = 4000000;

	next = prev + cur;
	even = cur;

	while (next <= max)
	{
		prev = cur;
		cur = next;
		next = prev + cur;
		if (next % 2 == 0 && next <= max)
		{
			even += next;
		}
	}
	printf("%ld\n", even);
}
