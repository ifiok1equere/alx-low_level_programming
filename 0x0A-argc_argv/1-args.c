#include "main.h"
#include <string.h>


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
	_putchar((argc - 1) + '0');
	_putchar('\n');

	return (0);
}
