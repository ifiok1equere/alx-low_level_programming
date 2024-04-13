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

	if (!key || !value)
		return (NULL);

	pair = malloc(sizeof(hash_node_t));
	if (pair == NULL)
		return (NULL);
	pair->key = malloc(strlen(key) + 1);
	if (pair->key == NULL)
	{
		free(pair);
		return (NULL);
	}
	pair->value = malloc(strlen(value) + 1);
	if (pair->value == NULL)
	{
		free(pair->key);
		free(pair);
		return (NULL);
	}
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
	const char *_value;
	hash_node_t *pair, *ptr;

	if (!ht || !key || !value || !ht->array)
		return (0);
	if (strlen(key) == 0)
		return (0);
	_value = strdup(value);
	pair = create_node(key, _value);
	if (pair == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
	/* printf("%p\n", (void *)ht->array[index]); */
	ptr = ht->array[index];
	if (ptr == NULL)
	{
		ht->array[index] = pair;
	}
	else
	{
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
			{
				strcpy(ptr->value, _value);
				free(pair->key);
				free(pair->value);
				free(pair);
				return (1);
			}
			ptr = ptr->next;
		}
		pair->next = ht->array[index];
		ht->array[index] = pair;
		/* printf("%s: %s\n", pair->key, pair->value); */
	}
	return (1);
}
