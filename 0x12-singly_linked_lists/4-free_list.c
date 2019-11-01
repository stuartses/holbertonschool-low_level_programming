#include "lists.h"
#include <string.h>
/**
 * free_list - free memory of list
 * @head: list
 *
 * Description: frees a list_t list
 * Return: list
 */

void free_list(list_t *head)
{

	list_t *temp, *next;

	temp = head;

	while (temp->next != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;

	}
	free(next->str);
	free(next);

	head = NULL;
}
