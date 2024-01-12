#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;
	

	count = 0;
	if (head == NULL)
		return NULL;

	while (head != NULL)
	{
		current = head;
		if (count == index)
		{
			return (current);
		}
			
		current = current->next;
		count++;	
	}
return NULL;	
}
