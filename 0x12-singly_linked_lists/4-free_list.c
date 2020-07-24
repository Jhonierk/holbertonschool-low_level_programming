#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: take an pointer
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
