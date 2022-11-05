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
	int i;
	unsigned int j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}

	return (0);
}
