#include "hash_tables.h"
/**
 * hash_table_create - creates Hash Table
 * @size: size of table. Number of elements for Array
 *
 * Description: creates a Hash table using struct, the element Array of struct
 * points to a linked list. The linked list is the Arra
 * Return: pointer to the array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hasht;
	hash_node_t **hash_array;

	/*if (size == 0)
	  return (NULL);*/

	hasht = malloc(sizeof(hash_table_t));

	if (hasht == NULL)
		return (NULL);

	hash_array = malloc(sizeof(hash_node_t *) * size);

	if (hash_array == NULL)
	{
		free(hasht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_array[i] = NULL;

	hasht->size = size;
	hasht->array = hash_array;

	return (hasht);
}
