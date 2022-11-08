#include "main.h"

/**
  *_abs - absolute value function
  *@i: function gets an integer parameter
  *Description - function computes abs values
  *Return: Always 0
  */

int _abs(int i)
{
	if (i < 0)
	{	return (i * -1);
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (i);
	}
}
