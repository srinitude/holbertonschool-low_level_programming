#include "hash_tables.h"

/**
 * create_new_array - Creates array for sorted hash table
 * @size: The size of the array
 *
 * Return: Pointer to new array or NULL
 */
shash_node_t **create_new_array(unsigned long int size)
{
	unsigned int i = 0;
	shash_node_t **new_array = NULL;

	new_array = malloc(size * sizeof(shash_node_t *));
	if (!new_array)
		return (NULL);
	for (; i < size; i++)
		new_array[i] = NULL;
	return (new_array);
}

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the table to create
 *
 * Return: Pointer to the hash table or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	shash_node_t **new_array = NULL;

	new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_array = create_new_array(size);
	if (!new_array)
	{
		free(new_table);
		return (NULL);
	}
	new_table->array = new_array;
	return (new_table);
}
