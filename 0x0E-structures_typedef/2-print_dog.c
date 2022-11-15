#include "dog.h"
#include <stdio.h>

/**
  * print_dog - Struct printing function
  * @d: First and only parameter
  *
  * Description: function that prints a variable of struct type
  *Return: return 1
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
	}
	else
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}

		if ((*d).age <= 0)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %if\n", (*d).age);
		}

		if ((*d).owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
