#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	hash_node_t *ptr;
	unsigned long int i;

	ht = hash_table_create(1024);

	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "ifiok", "value 00");


	hash_table_set(ht, "hetairas", "value_01");
	hash_table_set(ht, "mentioner", "value_011");

	hash_table_set(ht, "heliotropes", "value1");
	hash_table_set(ht, "neurospora", "value2");

	hash_table_set(ht, "depravement", "value3");
	hash_table_set(ht, "serafins", "value4");

	hash_table_set(ht, "stylist", "value5");
	hash_table_set(ht, "subgenera", "value6");

	hash_table_set(ht, "joyful", "value7");
	hash_table_set(ht, "synaphea", "value8");

	hash_table_set(ht, "redescribed", "value9");
	hash_table_set(ht, "urites", "value10");

	hash_table_set(ht, "dram", "value11");
	hash_table_set(ht, "vivency", "value12");

	printf("--------\n");
	printf("%lu\n", ht->size);
	for (i=0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (ptr != NULL)
		{
			if (ptr->next == NULL)
				printf("%s\n", ptr->key);
			else
				while (ptr != NULL)
				{
					printf("%lu - %s\n", i, ptr->key);
					ptr = ptr->next;
				}
		}

	}

	 return (EXIT_SUCCESS);
}
