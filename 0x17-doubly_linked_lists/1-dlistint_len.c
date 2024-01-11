#include "lists.h"
/**
 * print_dlistint - function that prints the lenght of a list and the values
 * @h: The head of the list
 * Return: returns 0 if null and the lenght of list if not null
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
	{
		return (0);
	}
	while(h != NULL)
	{
		i++;
		h = h->next;
	}
	return(i);
}
