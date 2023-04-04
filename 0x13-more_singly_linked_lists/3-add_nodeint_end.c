#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node to the end of list
 * @head: pointer to the start of the linked list
 * @n: value to add to node
 * Return: the address of the new element and Null if not exist
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *nw;
	listint_t *lt;

	if (!head)
		return (NULL);

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);
	(*nw).n = n;
	(*nw).next = NULL;

	if (head && !*head)
	{
		*head = nw;
		return (nw);
	}

	for (lt = *head; (*lt).next; lt = (*lt).next)
		;

	(*lt).next = nw;

	return (nw);
}

