#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - insert new element to array
 * @ht: input ash table
 * @key: input key
 * @value: input value
 *
 * Description: insert new element at new index in hash table
 * Return: 1 if success or 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_index;
	hash_node_t *hash_list;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL || strcmp("", key) == 0)
		return (0);

	hash_index = key_index((unsigned char *)key, ht->size);

	hash_list = ht->array[hash_index];

	while (hash_list != NULL)
	{
		if (strcmp(hash_list->key, key) == 0)
		{
			free(hash_list->value);
			hash_list->value = strdup(value);
			return (1);
		}
		hash_list = hash_list->next;
	}

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[hash_index];
	ht->array[hash_index] = new_node;

	return (1);
}
