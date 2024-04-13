#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *
 * @key: key whose index is to be found
 * @size: size of hash table array
 * Return: index of at which key/value pair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
