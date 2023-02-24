#include <stdio.h>

/**
 * prime_factor - function prints the largest prime factor of a n
 * @n: number whose largest prime factor is to be found
 *
 * Return: 0 for success
 */
void prime_factor(long int n)
{
	long int i = 2, max = 0;

	while (i)
	{
		if (n % i != 0)
		{
			i++;
		}
		else
		{
			max = n;
			n = n / i;
			if (n == 1)
			{
				printf("%ld\n", max);
				break;
			}
		}
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	prime_factor(612852475143);
	return (0);
}
