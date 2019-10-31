#include "lists.h"
/**
 * print_list - Prints the elements of a singly list
 * @h: header of list.
 *
 * Description: function that prints all the elements of a list_t list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	unsigned int leng;
	char *strg;

	while (h != NULL)
	{
		leng = h->len;
		strg = h->str;
		if (h->str == NULL)
		{
			leng = 0;
			strg = "(nil)";
		}
		printf("[%d]", leng);
		printf(" %s\n", strg);
		i++;
		h = h->next;
	}

	return (i);
}
