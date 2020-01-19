#include "hash_tables.h"
/**
 * hash_table_get - get value at key in a Hash Table
 * @ht: input hash table
 * @key: input key
 *
 * Description: gets the value at kay
 * Return: value or NULL if Fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index;
	hash_node_t *hash_list;

	if (ht == NULL || key == NULL || strcmp("", key) == 0)
		return (NULL);

	hash_index = key_index((unsigned char *)key, ht->size);
	hash_list = ht->array[hash_index];

	while (hash_list != NULL)
	{
		if (strcmp(hash_list->key, key) == 0)
			return (hash_list->value);

		hash_list = hash_list->next;
	}

	return (NULL);
}
