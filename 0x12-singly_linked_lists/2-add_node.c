#include "lists.h"
#include <string.h>
/**
 * add_node - add new alement to the begining of list
 * @head: list
 * @str: new data for list
 *
 * Description: function that adds a new node at the beginning of a list_t list
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int leng = 0;

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
	new->next = *head;

	*head = new;
	return (*head);
}
