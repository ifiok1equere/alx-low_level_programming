#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 50000

unsigned long hash_function(char* str)
{
    unsigned long i = 0;

    for (int j = 0; str[j]; j++)
	    i += str[j];

    return (i % CAPACITY);
}

int main(void)
{
	int i = 0;
	char *array[3] = {"Hel", "Cau"};
	int len;

	len = sizeof(array) / sizeof(array[i]);

	for (i = 0; i < len; i++)
	{
		if (array[i])
			printf("%lu\n", hash_function(array[i]));
	}

	return (0);
}
