#include "hash_tables.h"
/**
 * hash_table_print - Function prints a hash table
 *
 * @ht: Hash Table.
 * Return: node for succes, NULL for failure.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, i = 0;
	hash_node_t *ptr;

	if (!ht || !ht->array)
	{
		printf("{}");
		return;
	}
	printf("{");
	while (index < ht->size)
	{
		ptr = ht->array[index];
		if (ptr != NULL)
		{
			if (ptr->next == NULL)
			{
				index++;
				printf("'%s': '%s'", ptr->key, ptr->value);
				for (i = 0; index < ht->size; i++)
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
			else
			{
				index++;
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
						for (i = 0; index < ht->size; i++)
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
		}
		index++;
	}
	printf("}\n");
}
