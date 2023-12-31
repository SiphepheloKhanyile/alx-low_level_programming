#include "hash_tables.h"

/**
 * hash_table_get - print value associated with given key.
 * @ht: The hash table
 * @key: The key to check for
 * Return: value of key or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *s;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	s = ht->array[index];
	if (s)
	{
		if (strcmp(key, s->key) == 0)
			return (s->value);
		for (; s; s = s->next)
			if (strcmp(key, s->key) == 0)
				return (s->value);
	}
	return (NULL);
}
