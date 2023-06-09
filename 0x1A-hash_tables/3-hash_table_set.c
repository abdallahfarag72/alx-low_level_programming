#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to add or update the element to
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if the operation succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	/* Calculate the index for the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists in the hash table */
	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			/* Update the value if the key already exists */
			free(temp_node->value);
			temp_node->value = strdup(value);
			return (1);
		}
		temp_node = temp_node->next;
	}
	/* Create a new node for the key-value pair */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/* Add the new node to the beginning of the list at the index */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
