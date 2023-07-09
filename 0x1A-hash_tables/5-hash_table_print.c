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

	if (!ht || !ht->array)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			if (ptr->next != NULL)
			{
				printf(", ");
				ptr = ptr->next;
				continue;
			}
			else
			{
				index++;
				while (index < ht->size)
				{
					if (ht->array[index] == NULL)
					{
						index++;
						continue;
					}
					else
					{
						printf(", ");
						index--;
						break;
					}
				}
			}
			break;
		}
	}
	printf("}\n");
}
