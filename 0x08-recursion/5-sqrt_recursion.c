#include "main.h"

/**
  *increment - increment function
  *@int: only param
  *Description - function finds the square root of a number
  *Return: returns an integer
*/

int increment(int, int);

/**
  *_sqrt_recursion - find square root
  *@n: only param
  *Description - function returns a number sqrt
  *Return: returns an integer
*/

int _sqrt_recursion(int n)
{
        int m = 1;

        if (n == 0)
        {
                return (0);
        }
        if (n == 1)
        {
                return (1);
        }

        return (increment(m, n));
}

/**
 *increment - increment function
 *@m: ist param
 *@n: 2nd param
 *Description - function finds the square root of a number
 *Return: returns an integer
*/


int increment(int m, int n)
{
        if (m * m == n)
        {
                return (m);
        }
        else
        {
                if (m <= n / 2)
                {
                        return (increment(m + 1, n));
                }
                else
                {
                        return (-1);
                }
        }
}
