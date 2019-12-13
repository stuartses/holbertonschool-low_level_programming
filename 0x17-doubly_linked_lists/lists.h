#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct dlistint_s - double linked list
 * @n: integer
 * @next: pointer to the next node
 * @prev: pointer to previus node
 *
 * Description: double linked list
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
#endif /* LISTS_H */
