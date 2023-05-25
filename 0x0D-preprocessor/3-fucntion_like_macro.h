#include <stdlib.h>
#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
	int height;
	int *ptr;
};

struct User *new_user(char *name, char *email, int age, int height, int *weight)
{
	struct User *user;
	struct User use;

	printf("The of the struct is: %lu\n", sizeof(struct User));
	user = &use;
	user->name = name;
	user->email = email;
	user->age = age;
	user->height = height;
	user->ptr = weight;
	return (user);
}

int main(void)
{
	struct User *user;

	int size = 90;
	int *weight = &size;

	user = new_user("Foo", "foo@foo.bar", 98, 10, weight);
	if (user == NULL)
		return (1);

	printf("User %s created !\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he is %d years old\n", user->age);
	printf("Height = %dm\n", user->height);
	printf("Weight = %dm\n", *(user->ptr));
	return (0);
}
