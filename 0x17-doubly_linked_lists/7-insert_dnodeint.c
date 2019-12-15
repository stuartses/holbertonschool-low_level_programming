#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: input list
 * @idx: index
 * @n: value of n at idx position
 *
 * Description: inserts a new node at a given position
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	temp = *h;
	if (idx == 0 || *h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	while (temp->next != NULL)
	{
		if (i == (idx - 1) && temp->next != NULL)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = temp;
			new->next = temp->next;
			temp->next = new;
			temp->next->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	i++;
	if (i == idx)
	{
		new = add_dnodeint_end(&temp, n);
		return (new);
	}
	return (NULL);
}
