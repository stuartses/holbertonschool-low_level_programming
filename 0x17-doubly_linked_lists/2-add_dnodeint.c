#include "lists.h"
/**
 * add_dnodeint - insert node at the begining of the double linked list
 * @head: input linked list
 * @n: input n value to new elemente
 *
 * Description: inpot new node at the beginig of a double linked list
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (*head);
}
