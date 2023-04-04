#include "lists.h"

/**
 * listint_len - return number of elements
 * @h: pointer to the first element* @n: integer
 * Description: singly linked list node structure
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; h = (*h).next, i++)
		;

	return (i);
}
