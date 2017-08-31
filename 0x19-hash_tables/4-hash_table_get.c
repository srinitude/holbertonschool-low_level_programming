#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value associated with a key
 * @ht: The hash table
 * @key: The key to retrieve
 *
 * Return: The value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
