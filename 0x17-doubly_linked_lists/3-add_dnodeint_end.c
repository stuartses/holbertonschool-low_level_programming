#include "lists.h"

/**
 * add_dnodeint_end - insert element at the end of the doubly linked list
 * @head: head of list
 * @n: value of n in the new element
 *
 * Description: adds a new node at the end of the doubly linked list
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	node = *head;
	while (node->next != NULL)
		node = node->next;
	node->next = new;
	new->prev = node;

	return (new);
}
