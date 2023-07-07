#include "hash_tables.h"

/**
 * hash_table_set - Function adds an element to a hash table
 *
 * @ht: Hash Table
 * @key: Hash Table Key.
 * @value: Associated value with key.
 * Return: 1 for success, 0 for failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* unsigned long int hash_value; */
	unsigned long int index;
	hash_node_t *pair;
	hash_node_t *current_index_item;

	if (strlen(key) == 0)
		return (0);
	pair = malloc(sizeof(hash_node_t));
	if (pair == NULL)
		return (0);
	pair->key = malloc(strlen(key) + 1);
	if (pair->key == NULL)
		return (0);
	pair->value = malloc(strlen(value) + 1);
	if (pair->value == NULL)
		return (0);
	strcpy(pair->key, key);
	strcpy(pair->value, value);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
	current_index_item = ht->array[index];

	if (current_index_item == NULL)
		ht->array[index] = pair;
	else
	{
		pair->next = current_index_item;
		current_index_item = pair;
	}
	return (1);
}
