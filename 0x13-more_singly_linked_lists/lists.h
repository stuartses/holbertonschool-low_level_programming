/**
 * Project: 0x13. C - More singly linked lists
 * Made by Stuart Echeverry for Holberton Shcool
 */

#ifndef HEADERS
#define HEADERS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif /* HEADERS*/
