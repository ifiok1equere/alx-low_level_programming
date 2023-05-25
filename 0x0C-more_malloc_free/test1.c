#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int *ptr, i = 0;

	ptr = realloc(NULL, sizeof(int) * 10);
	if (ptr == NULL)
		printf("one");

	while (i < 10)
	{
		ptr[i] = i + 2;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		printf("Value in [%d]th index of ptr = %d\n", i, ptr[i]);
		i++;
	}
	free(ptr);

	return (0);
}
