#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function prints a struct dog
 * @d: pointer to struct object my_dog
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("%s\n", "Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("%s\n", "Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
