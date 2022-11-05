#include "main.h"
#include <string.h>

/**
  *main - argc func
  *@argc - cml argument count
  *@argv - pointer to cml string arguments
  *
  *Return: an integer
  */

int main(int argc, char *argv[])
{
	unsigned int i;

	for (i = argc - argc; i < strlen(argv[0]); i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');

	return (0);
}
