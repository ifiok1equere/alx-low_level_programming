#include "hash_tables.h"

/**
 * key_index - Function gives the index of a key
 *
 * @key: Hash Table Key.
 * @size: Array size of the Hash Table.
 * Return: index of the key in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
