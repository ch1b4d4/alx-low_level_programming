#include "lists.h"


/**
 * struct listint_s - singly linked list
 * print_listint - print elements of linked list and return # elements
 * @n: integer
 * @printt: list to print the number of nodes
 *
 * Description: singly linked list node structure
 *
 */

size_t print_listint(const listint_t *h)

{
	int i;

	for (i = 0; h; h = (*h).next, i++)
		printf("%d\n", (*h).n);

	return (i);
}


