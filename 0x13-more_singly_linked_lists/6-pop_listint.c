#include "lists.h"
/**
 * pop_listint - delete head of a list
 * @head: input list
 *
 * Description: delete first element of a list
 * Return: int n of delete head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (head == NULL || temp == NULL)
		return (0);
	n = (*head)->n;
	*head = temp->next;
	free(temp);

	return (n);
}
