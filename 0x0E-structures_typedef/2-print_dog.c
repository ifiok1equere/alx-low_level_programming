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
	if (d != NULL)
	{
		if ((*d).name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("Name: (nil)");
		}

		if (d->age != 0)
		{
			printf("Age: %.1f\n", (*d).age);
		}
		else
		{
			printf("Age: (nil)");
		}

		if ((*d).owner != NULL)
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("Owner: (nil)");
		}
	}
	else
	{
		printf("%p", "");
	}
}
