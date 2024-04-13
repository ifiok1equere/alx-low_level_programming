#include "hash_tables.h"
#include "hash_tables.h"

/**
 * hash_node_delete - Function deletes a hash node
 * @node: Hash node to delete.
 * Return: void
 */

void hash_node_delete(hash_node_t *node)
{
	free(node->value);
	free(node->key);
	free(node);
}

/**
 * hash_table_delete - Function deletes a hash table
 * @ht: Hash table to delete.
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *ptr, *next;

	if (!ht)
		return;

	if (ht->array)
	{
		for (index = 0; index < ht->size; index++)
		{
			ptr = ht->array[index];
			while (ptr)
			{
				next = ptr->next;
				hash_node_delete(ptr);
				ptr = next;
			}
		}
		free(ht->array);
	}
	free(ht);
}
