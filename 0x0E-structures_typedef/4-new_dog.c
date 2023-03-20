#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	if ((name == NULL) | (owner == NULL))
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	ptr->name = malloc(sizeof(strlen(name) + 1));
	ptr->age = age;
	ptr->owner = malloc(sizeof(strlen(owner) + 1));
	if ((ptr->name == NULL) || (ptr->owner == NULL))
		return (NULL);


	ptr->name = name;
	ptr->owner = owner;

	return (ptr);
}
