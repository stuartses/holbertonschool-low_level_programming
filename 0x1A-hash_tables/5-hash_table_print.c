#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints hash table
 * @ht: hash table
 *
 * Description: prints all elements in hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int is_first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (is_first == 0)
				printf(", ");
			else
				is_first = 0;

			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
