#include "hash_tables.h"
/**
 * hash_table_print - Function prints a hash table
 * @ht: Hash Table.
 * Return: node for succes, NULL for failure.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *ptr;
	unsigned long int first_node = 1;

	if (!ht || !ht->array)
	{
		printf("{}\n");
		return;
	}
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		ptr = ht->array[index];

		while (ptr != NULL)
		{
			if (!first_node)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			first_node = 0;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
