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
	int i = 0;
	int cent[] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (i < 5)
	{
		if (cent[i]) <= atoi(argv[1])
		{
			return (0);
		}
		i++;
	}
	return (0);
}
