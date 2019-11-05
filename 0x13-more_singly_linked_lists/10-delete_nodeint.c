#include "lists.h"
/**
 * delete_nodeint_at_index - delete a element of a list
 * @head: input list
 * @index: position
 *
 * Description: delete a element of a list ar position index
 * Return: 1 if is successfull or -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *delete_node;

	temp = *head;

	while (temp != NULL)
	{
		if (index == 0)
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
		if (i == index - 1)
		{
			delete_node = temp->next;
			temp->next = delete_node->next;
			free(delete_node);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
