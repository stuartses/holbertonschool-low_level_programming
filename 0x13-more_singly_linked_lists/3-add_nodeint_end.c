#include "lists.h"
/**
 * add_nodeint_end - add element at the end of a list
 * @head: input list
 * @n: new element
 *
 * Description: function that add a new element at the end of the list
 * Return: Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail, *temp;

	temp = *head;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
		return (NULL);

	new_tail->n = n;
	new_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_tail;
		return (new_tail);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_tail;

	return (new_tail);
}
