#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int main(void)
{
	list_t *new;
	list_t *head;
	list_t hello = {"World", 5, NULL};
	head = &hello;

	printf("%s, %u, %p\n", head->str, head->len, head->next);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;

	printf("%s, %u, %p\n", new->str, new->len, new->next->next);

	head = new;
	printf("%s, %u, %p\n", head->str, head->len, head->next->next);






	return (0);

}
