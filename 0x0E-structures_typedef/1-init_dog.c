#include "dog.h"

/**
  * init_dog - Struct initializing function
  * @d: First parameter
  * @name: Second parameter
  * @age: Third parameter
  * @owner: 4th parameter
  *
  * Description: function that initializes a variable of struct type
  *Return: return 1
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
