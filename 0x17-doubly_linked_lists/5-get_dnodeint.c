#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;
	
	current = head;
	count = 0;
	if (head == NULL)
		return NULL;
	while (head != NULL)
	{	
		current = current->next;
		count++;
		while (index <= count)
		{
			if (count == index)
			{
				return (current);
			}
		}
	}
return(current);
}
