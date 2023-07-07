#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);

	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "ifiok", "col");


	hash_table_set(ht, "hetairas", "cool");
	hash_table_set(ht, "mentioner", "cooler");

	hash_table_set(ht, "heliotropes", "value1");
	hash_table_set(ht, "neurospora", "value2");

	hash_table_set(ht, "depravement", "value4");
	hash_table_set(ht, "serafins", "value3");

	hash_table_set(ht, "stylist", "value5");
	hash_table_set(ht, "subgenera", "value6");

	hash_table_set(ht, "joyful", "value7");
	hash_table_set(ht, "synaphea", "value7");

	hash_table_set(ht, "redescribed", "value8");
	hash_table_set(ht, "urites", "value9");

	hash_table_set(ht, "dram", "value10");
	hash_table_set(ht, "vivency", "value11");

	 return (EXIT_SUCCESS);
}
