#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: input list
 *
 * Description: function that prints all the elements of a listint_t list
 * Return: number of elements of list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
