#include "lists.h"
/**
 * free_listint - free all elements of a add last node list
 * @head: input list
 *
 * Description: free all memory of las node list
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *temp_next;

	temp = head;
	while (temp->next != NULL)
	{
		temp_next = temp->next;
		free(temp);
		temp = temp_next;
	}
	free(temp->next);
	free(temp);
}
