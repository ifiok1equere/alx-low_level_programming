#include "hash_tables.h"

/**
 * create_node - Function creates a node for key/value pair
 *
 * @key: Hash Table Key.
 * @value: Associated value with key.
 * Return: node for succes, NULL for failure.
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *pair;

	if (key == NULL || value == NULL)
		return (NULL);

	pair = malloc(sizeof(hash_node_t));
	if (pair == NULL)
		return (NULL);

	pair->key = malloc(strlen(key) + 1);
	if (pair->key == NULL)
		return (NULL);

	pair->value = malloc(strlen(value) + 1);
	if (pair->value == NULL)
		return (NULL);

	strcpy(pair->key, key);
	strcpy(pair->value, value);
	return (pair);
}

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
	unsigned long int index;
	hash_node_t *current_index_item;
	hash_node_t *pair;

	if (!ht || !key || !value)
		return (0);
	if (strlen(key) == 0)
		return (0);

	pair = create_node(key, value);
	if (pair == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);

	current_index_item = ht->array[index];
	if (current_index_item == NULL)
		ht->array[index] = pair;
	else
	{
		if (strcmp(current_index_item->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			pair->next = current_index_item;
			current_index_item = pair;
		}
	}
	return (1);
}
