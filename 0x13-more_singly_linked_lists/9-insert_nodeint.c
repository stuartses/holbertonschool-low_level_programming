#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new element at idx position
 * @head: input list
 * @idx: position
 * @n: data for new element
 *
 * Description: insert a new alement at the position idx of a list
 * Return: the address of the new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *new_node;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	if (temp == NULL && idx == 0)
	{
		*head = new_node;
		return (*head);
	}


	while (temp != NULL)
	{
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (*head);
		}
		if (i == (idx - 1))
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
