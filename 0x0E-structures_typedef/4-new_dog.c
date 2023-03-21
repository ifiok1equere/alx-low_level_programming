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

	if ((name == NULL) || (age < 0) || (owner == NULL))
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(strlen(name) + 1));
	if (ptr->name == NULL)
		return (NULL);
	ptr->owner = malloc(sizeof(strlen(owner) + 1));
	if (ptr->owner == NULL)
		return (NULL);
	if (ptr->name && ptr->owner)
	{
		ptr->name = strcpy(ptr->name, name);
		ptr->owner = strcpy(ptr->owner, owner);
		ptr->age = age;
	}
	else
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		ptr = NULL;
	}
	return (ptr);
}
