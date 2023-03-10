#include <stdio.h>

/**
 * main - function to pass command line arguments to the program.
 * @argc: the command line argument count
 * @argv: an array of pointers to string found in the command line argument.
 *
 * Return: 0 for success.
 */


int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
