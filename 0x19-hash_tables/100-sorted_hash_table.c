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

/**
 * create_new_node - Create a new node
 * @key: The key of the new node
 * @value: The value of the node
 *
 * Return: The new node or NULL
 */
shash_node_t *create_new_node(const char *key, const char *value)
{
	shash_node_t *new_node = NULL;

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;

	return (new_node);
}

/**
 * free_node - Frees a node
 * @node: The node to free
 *
 * Return: None
 */
void free_node(shash_node_t *node)
{
	free(node->key);
	node->key = NULL;
	free(node->value);
	node->value = NULL;
	free(node);
	node = NULL;
}

/**
 * update_value_for_key: Sees if there's already an existing key
 * @bucket: The bucket to search
 * @node: The node to free if the key matches an existing one
 *
 * Return: Success or failure
 */
int update_value_for_key(shash_node_t *bucket, shash_node_t *node)
{
	shash_node_t *list = NULL;
	char *key = node->key, *new_value = node->value;

	list = bucket;
	while (list)
	{
		if (strcmp(key, list->key) == 0)
		{
			current_value = list->value;
			list->value = new_value;
			free(current_value);
			free_node(new_node);
			return (SUCCESS);
		}
		list = list->next;
	}
	return (FAILURE);
}

/**
 * update_sorted_list - Adds node to the sorted list
 * @ht: The hash table
 * @node: The node to add
 *
 * Return: Success or failure
 */
int update_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current = NULL, *temp = NULL, *next = NULL;
	char *key = node->key, *new = node->value, *ckey = NULL, *nkey = NULL;
	char *cval = NULL;

	current = ht->shead;
	if (!current)
	{
		current = node;
		return (SUCCESS);
	}
	while (current)
	{
		next = current->snext;
		ckey = current->key;
		if (strcmp(key, ckey) < 0)
		{
			temp = current;
			current = node;
			node->snext = temp;
			temp->sprev = node;
			return (SUCCESS);
		}
		if (strcmp(key, ckey) > 0 && (!next))
		{
			current->snext = node;
			node->sprev = current;
			ht->stail = node;
			return (SUCCESS);
		}
		nkey = next->key
		if ((strcmp(key, ckey) > 0) && (strcmp(key, nkey) < 0))
		{
			current->snext = node;
			node->sprev = current;
			node->snext = next;
			next->sprev = node;
			return (SUCCESS);
		}
		if (strcmp(key, ckey) == 0)
		{
			cval = current->value;
			current->value = new;
			free(cval);
			free_node(node);
			return (SUCCESS);
		}
		current = current->next;
	}
	return (FAILURE);
}

/**
 * shash_table_set - Sets key/value pair in bucket, as well as sorted list
 * @ht: The hash table
 * @key: The key to add/update
 * @value: The value to add/update
 *
 * Return: Success or failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	int success = 0, updated = 0;
	unsigned long int index = 0;
	shash_node_t *bucket = NULL, *cur = NULL, *list = NULL, *new_node = NULL;
	char *new_value = NULL, *current_value = NULL;

	if (!ht || !key)
		return (FAILURE);
	if (!strlen(key))
		return (FAILURE);
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];
	new_node = create_new_node(key, value);
	if (!new_node)
		return (FAILURE);
	if (!bucket)
		bucket = new_node;
	else
	{
		updated = update_value_for_key(bucket, new_node)
		if (!updated)
		{
			cur = bucket;
			bucket = new_node;
			new_node->next = cur;
		}
	}
	return (update_sorted_list(ht, new_node));
}
