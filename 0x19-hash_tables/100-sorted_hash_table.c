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
	new_table->size = size;
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
	char *new_key = NULL, *new_value = NULL;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_key = strdup((char *)key);
	new_value = strdup((char *)value);
	new_node->key = new_key;
	new_node->value = new_value;
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
 * Return: The updated node or NULL
 */
int update_value_for_key(shash_node_t *bucket, shash_node_t *node)
{
	shash_node_t *list = NULL;
	char *key = node->key, *new_value = NULL, *cval = NULL;

	list = bucket;
	while (list)
	{
		if (strcmp(key, list->key) == 0)
		{
			cval = list->value;
			new_value = strdup((char *)node->value);
			list->value = new_value;
			free(cval);
			cval = NULL;
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
	char *key = node->key, *ckey = NULL, *nkey = NULL;
	char *cval = NULL, *new = NULL;

	current = ht->shead;
	if (!current)
	{
		ht->shead = node;
		ht->stail = node;
		return (SUCCESS);
	}
	while (current)
	{
		next = current->snext;
		ckey = current->key;
		if (strcmp(key, ckey) < 0)
		{
			temp = ht->shead;
			ht->shead = node;
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
		if (next)
		{
			nkey = next->key;
			if ((strcmp(key, ckey) > 0) && (strcmp(key, nkey) < 0))
			{
				current->snext = node;
				node->sprev = current;
				node->snext = next;
				next->sprev = node;
				return (SUCCESS);
			}
		}
		if (strcmp(key, ckey) == 0)
		{
			cval = current->value;
			new = strdup(node->value);
			current->value = new;
			free(cval);
			cval = NULL;
			free_node(node);
			node = NULL;
			return (SUCCESS);
		}
		current = current->snext;
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
	int updated = 0;
	unsigned long int index = 0;
	shash_node_t *bucket = NULL, *cur = NULL, *new = NULL;

	if (!ht || !key)
		return (FAILURE);
	if (!strlen(key))
		return (FAILURE);
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];
	new = create_new_node(key, value);
	if (!new)
		return (FAILURE);
	if (!bucket)
		ht->array[index] = new;
	else
	{
		updated = update_value_for_key(bucket, new);
		if (!updated)
		{
			cur = ht->array[index];
			ht->array[index] = new;
			new->next = cur;
		}
	}
	return (update_sorted_list(ht, new));
}

/**
 * shash_table_get - Retrieves value associated with a key
 * @ht: The hash table
 * @key: The key to retrieve
 *
 * Return: The value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node = NULL;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Print elements within a hash table
 * @ht: The hash table
 *
 * Return: None
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	int first = 1;

	if (!ht)
		return;
	printf("{");
	node = ht->shead;
	while (node)
	{
		if (first)
		{
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
		}
		else
			printf(", '%s': '%s'", node->key, node->value);
		if (!node->snext)
			break;
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print elements within a hash table in reverse
 * @ht: The hash table
 *
 * Return: None
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	int first = 1;

	if (!ht)
		return;
	printf("{");
	node = ht->stail;
	while (node)
	{
		if (first)
		{
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
		}
		else
			printf(", '%s': '%s'", node->key, node->value);
		if (!node->sprev)
			break;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete a sorted hash table
 * @ht: The hash table
 *
 * Return: None
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL, *current = NULL;

	if (!ht)
		return;
	node = ht->shead;
	while (node)
	{
		current = node;
		free_node(current);
		current = NULL;
		node->sprev = NULL;
		node = node->snext;
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
