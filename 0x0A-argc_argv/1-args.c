#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
  *main - argc func
  *@argc: cml argument count
  *@argv: pointer to cml string arguments
  *
  *Return: an integer
  */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
