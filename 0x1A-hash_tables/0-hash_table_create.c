#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: The size of the HashTable
 *
 * Return: A pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		perror("malloc failure");
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		perror("malloc failure");
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
