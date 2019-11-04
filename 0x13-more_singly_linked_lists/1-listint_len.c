#include "lists.h"
/**
 * listint_len - count the elements of a listint_t list
 * @h: input list
 *
 * Description: function that count all the elements of a listint_t list
 * Return: number of elements of list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
