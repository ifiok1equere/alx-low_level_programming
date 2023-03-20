#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function creates a new dog.
 * @name: struct object element
 * @age: struct object element age
 * @owner: struct object element owner
 *
 * Return: pointer of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	dog_t p;

	if ((name == NULL) | (owner == NULL))
		return (NULL);

	p.name = name;
	p.age = age;
	p.owner = owner;

	ptr = &p;

	return (ptr);
}
