#include "lists.h"
/**
 * list_len - Prints the elements of a singly list
 * @h: header of list.
 *
 * Description: prints the number of elements in a linked list_t list.
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
