#include "hash_tables.h"

/**
 * hash_djb2 - Function implementing the djb2 algorithm
 *
 * @key: Hash Table Key.
 * @size: Array size of the Hash Table.
 * Return: index of the key in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return index;
}
