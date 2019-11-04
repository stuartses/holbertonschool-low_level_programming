#include "lists.h"
/**
 * add_nodeint - add new element at the begining of list
 * @head: input list
 * @n:  new element
 *
 * Description: add new element at the begining of a list type listint_t
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (*head);
}
