#ifndef DOG_
#define DOG_

/**
 * struct dog - User defined data type consisting of 3 primitive types
 * @name: element refers to name of the object with type pointer to char
 * @age: element refers to the object age with type float
 * @owner: element refers to object with type pointer to char
 *
 * Description: this structure declaration creates a multi-element object with
 * name, age and owner of types pointer to char, float and pointer to char
 * respectively
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* #ifndef DOG_*/
