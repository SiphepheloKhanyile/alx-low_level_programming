#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: size of the array.
 *
 * Return: pointer to the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **node;

	new = calloc(1, sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = calloc(size, sizeof(node));

	if (new->array == NULL)
		return (NULL);
	return (new);
}
