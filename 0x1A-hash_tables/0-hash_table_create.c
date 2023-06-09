#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the new hash table
 *
 * Return: a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);
	new_ht->size = size;
	new_ht->array = malloc(new_ht->size *  sizeof(hash_node_t *));
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	for (i = 0; i < new_ht->size; i++)
		new_ht->array[i] = NULL;

	return (new_ht);
}
