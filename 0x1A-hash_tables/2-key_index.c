#include "hash_tables.h"

/**
 * key_index - Found the index of a key in dbj2 algotihm
 * @key: input key
 * @size: size of array
 *
 * Description: calculates the index of a key wiht the dbj2 algorithm
 * Return: index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2(key) % size;

	return (key_index);
}
