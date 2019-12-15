#include "lists.h"
/**
 * get_dnodeint_at_index - find node at the index
 * @head: input list
 * @index: position needed
 *
 * Description: returns the nth node of a doubly linked list
 * Return: position at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
