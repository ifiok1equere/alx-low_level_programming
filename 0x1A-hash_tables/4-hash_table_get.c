#include "hash_tables.h"
/**
 * hash_table_get - Function retrives the value of a key in a key/value pair
 * node
 *
 * @ht: Hash Table.
 * @key: Hash Table key.
 * Return: node for succes, NULL for failure.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	ptr = ht->array[index];
	if (ptr != NULL)
	{
		if (ptr->next == NULL)
			return (ptr->value);
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
				return (ptr->value);
			ptr = ptr->next;
		}
	}
	return (NULL);
}
