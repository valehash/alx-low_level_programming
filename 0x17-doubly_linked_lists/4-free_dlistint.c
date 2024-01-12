#include "lists.h"
/**
 * free_dlistint - function to free the liked list
 * @head: the first node of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;	
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
