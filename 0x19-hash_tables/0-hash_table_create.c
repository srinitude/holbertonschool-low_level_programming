#include "hash_tables.h"

/**
 * create_hash_table_array - Creates HT array
 * @size: The size of the array
 *
 * Return: The new array or NULL
 */
hash_node_t **create_hash_table_array(unsigned long int size)
{
	hash_node_t **new_array = NULL;

	new_array = malloc(sizeof(hash_node_t *) * size);
	if (new_array == NULL)
		return (NULL);
	return (new_array);
}

/**
 * hash_table_create - Wrapper to create hash table
 * @size: The size of the array in the table
 *
 * Return: The address of the table or NULL
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	hash_node_t **new_array = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_array = create_hash_table_array(size);
	if (new_array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	new_table->array = new_array;

	return (new_table);
}
