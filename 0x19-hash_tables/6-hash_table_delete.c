#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: The hash table
 *
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0, size;
	hash_node_t *node = NULL, *current = NULL;

	if (!ht)
		return;
	size = ht->size;
	for (; i < size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			current = node;
			free(current->key);
			free(current->value);
			free(current);
			node = node->next;
		}
	}
	free(ht->array);
	free(ht);
}
