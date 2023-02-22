#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void natural_num1024(void);

int main(void)
{
	natural_num1024();
	return (0);
}

/**
 * natural_num1024 - function computes sum of all the multiples of 3/5 < 1024
 *
 * Return: void
 */
void natural_num1024(void)
{
	int c = 0, i = 1;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			c += i;
		}
		i++;
	}
	printf("%d\n", c);
}
