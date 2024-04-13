#include "hash_tables.h"


/**
 * hash_table_create - function creates a hasg table
 *
 * @size: size of the array
 * Return: pointer to table created or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	return (table);
}
