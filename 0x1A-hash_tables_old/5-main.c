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
	hash_table_print(ht);

	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");

	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "ifiok", "value 00");

	hash_table_set(ht, "hetairas", "value_01");
        hash_table_set(ht, "mentioner", "value_011");

        hash_table_set(ht, "heliotropes", "value1");
        hash_table_set(ht, "neurospora", "value2");

        hash_table_set(ht, "depravement", "value3");
        hash_table_set(ht, "serafins", "value4");

        hash_table_set(ht, "stylist", "value5");
        hash_table_set(ht, "subgenera", "value6");

        hash_table_set(ht, "joyful", "value7");
        hash_table_set(ht, "synaphea", "value8");

        hash_table_set(ht, "redescribed", "value9");
        hash_table_set(ht, "urites", "value10");

        hash_table_set(ht, "dram", "value11");
        hash_table_set(ht, "vivency", "value12");

	hash_table_print(ht);
    return (EXIT_SUCCESS);
}

/* {'Betty': 'Cool', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Asterix': 'Obelix'} */
