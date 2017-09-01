#include "hash_tables.h"

/**
 * hash_table_print - Print elements within a hash table
 * @ht: The hash table
 *
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, size;
	hash_node_t *node = NULL;
	int first = 1;

	if (!ht)
		return;
	size = ht->size;
	printf("{");
	for (; i < size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (first)
			{
				printf("'%s': '%s'", node->key, node->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", node->key, node->value);
			if (!node->next)
				break;
			node = node->next;
		}
	}
	printf("}\n");
}
