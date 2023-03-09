#include "main.h"

/**
  *find_prime - increment function
  *@int: only param
  *Description - function declaration
  *Return: returns an integer
  */

int find_prime(int, int);

/**
  *is_prime_number - find square root
  *@n: only param
  *Description - function returns a prime number
  *Return: returns an integer
  */

int is_prime_number(int n)
{
	int i = 2;

	if ((n == 0) || (n == 1))
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, i));
	}
}

/**
  *find_prime - increment function
  *@i: ist param
  *@n: 2nd param
  *Description - function determnes whether a number is a prime number
  *Return: returns an integer
  */

int find_prime(int n, int i)
{
	if (n % i != 0)
	{
		if (i <= n / 2)
		{
			return (find_prime(n, 1 + i));
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
