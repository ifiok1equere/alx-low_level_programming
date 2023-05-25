#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *a, *b, *c, i;

	a = malloc(sizeof(int) * 10);
	if (a == NULL)
		exit(EXIT_FAILURE);
	b = malloc(sizeof(int) * 10);
	if (b == NULL)
		exit(EXIT_FAILURE);
	printf("Address of a before free: %p\n", (void *)a);
	printf("Address of b: %p\n", (void *)b);

	for (i = 0; i < 10; i++)
		a[i] = i;
	for (i = 0; i < 10; i++)
		b[i] = i + 1;
	for (i = 0; i < 10; i++)
		printf("a[%d] = %i\n", i, a[i]);
	putchar('\n');
	for (i = 0; i < 10; i++)
		printf("b[%i] = %i\n", i, b[i]);

	c = realloc(NULL, sizeof(int) * 20);

	putchar('\n');
	for (i = 0; i < 10; i++)
		printf("a[%d] = %d\n", i, a[i]);

	printf("Address of a after free: %p\n", (void *)a);
	printf("Address of c: %p\n", (void *)c);
	return (0);
}
