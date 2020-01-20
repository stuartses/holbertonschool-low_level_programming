#include "hash_tables.h"

/**
 * hash_table_delete - deletes Hash Table
 * @ht: input hash table
 *
 * Description: Free Alloc memmory in Hash Table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *node_next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			node_next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = node_next;
		}
	}
	free(ht->array);
	free(ht);
}
