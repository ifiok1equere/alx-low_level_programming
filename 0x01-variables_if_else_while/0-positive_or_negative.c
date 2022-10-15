#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *main - more headers goes there
  *Description - code checks for a positive or negative number
  *Return: returns an integer
*/

int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	srand(time(0));
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
