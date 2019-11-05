#include "lists.h"
/**
 * get_nodeint_at_index - finde the node at position index
 * @head: input list
 * @index: position of wanted node
 *
 * Description: find a node at de position of index
 * Return: list in the psotition of index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}
