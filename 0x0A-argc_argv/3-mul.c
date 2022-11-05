#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  *main - argc func
  *@argc: cml argument count
  *@argv: pointer to cml string arguments
  *
  *Return: an integer
  */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int j;

		j = (atoi(argv[1])) * atoi(argv[2]);

		printf("%d\n", j);

		return (0);
	}
	else
	{
		char *s = "Error";

		printf("%s\n", s);

		return (1);
	}
}
