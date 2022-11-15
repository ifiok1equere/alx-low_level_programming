#ifndef _DOG_H_
#define _DOG_H_

/**
  * struct dog - func creates 3 data types
  * @name: First member
  * @age: Second member
  * @owner: Third member
  *
  * Description: 3 datatypes created
*/

struct dog
{
	char *name;
	double age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/*int _putchar(char c);*/

#endif
