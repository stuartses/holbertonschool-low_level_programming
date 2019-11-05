#include "lists.h"
/**
 * sum_listint - sum all elemente of a list
 * @head: input list
 *
 * Description: sum all elements of a list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
