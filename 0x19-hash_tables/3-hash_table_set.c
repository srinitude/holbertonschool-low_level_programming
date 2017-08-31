#include "hash_tables.h"

/**
 * create_node - Create new hash table node
 * @key: The key to add
 * @value: The value to add
 *
 * Return: The address of the new node or NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = (char *)key;
	new_node->value = (char *)value;

	return (new_node);
}

/**
 * hash_table_set - Set key/value pair within a hash
 * @ht: The hash table
 * @key: The key to add
 * @value: The value to add
 *
 * Return: Success or failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;
	hash_node_t *current_head = NULL;

	if (!ht || !key)
		return (FAILURE);
	if (!strlen(key))
		return (FAILURE);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = create_node(key, value);
	if (!new_node)
		return (FAILURE);
	if (ht->array[index])
	{
		current_head = ht->array[index];
		ht->array[index] = new_node;
		new_node->next = current_head;
		return (SUCCESS);
	}
	ht->array[index] = new_node;
	return (SUCCESS);
}
