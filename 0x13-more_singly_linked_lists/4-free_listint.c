#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Free all malloced spaced of a list
 * @head: Pointer to the start of the list
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
