#include "dog.h"
/**
 * init_dog - function initializes a variable of type struct dog
 * @d: pointer to struct object my_dog
 * @name: struct object element
 * @age: struct object element age
 * @owner: struct object element owner
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
