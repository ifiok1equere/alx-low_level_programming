#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function prints the chessboard.
 *
 * @a: pointer to an array of size 8 columns.
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j <= 8)
		{
			printf("%c",a[i][j]);
			j++;
			if (j == 8)
			{
				printf("\n");
				break;
			}
		}
		j = 0;
		i++;
	}
}
