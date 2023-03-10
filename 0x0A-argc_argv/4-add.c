#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to pass command line arguments to the program.
 * @argc: the command line argument count
 * @argv: an array of pointers to string found in the command line argument.
 *
 * Return: 0 for success.
 */


int main(int argc, char *argv[])
{
	int add = 0, i = 1;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i < argc)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			add += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}

	printf("%d\n", add);
	return (0);
}
