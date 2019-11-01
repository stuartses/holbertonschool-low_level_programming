#include "lists.h"
#include <string.h>
/**
 * add_node_end - add new alement at the end of list
 * @head: list
 * @str: new data for list
 *
 * Description: function that adds a new node at the end of a list_t list
 * Return: list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int leng = 0;

	temp = *head;

	while (str[leng] != '\0')
		leng++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->str = strdup(str);
	new->len = leng;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (temp);
}
