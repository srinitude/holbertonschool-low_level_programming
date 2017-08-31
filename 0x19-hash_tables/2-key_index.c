#include "hash_tables.h"

/**
 * key_index - Returns the index for a given key
 * @key: The key used to store/retrieve data from table
 * @size: The size of the array in the table
 *
 * Return: The bucket where a key/value pair resides
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
