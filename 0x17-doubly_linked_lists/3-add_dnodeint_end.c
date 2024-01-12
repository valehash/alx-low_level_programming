#include "lists.h"
/**
 * add_nodeint_end - function that adds a node to the end of the list
 * @head: The head of the list
 * @n: The value of the node
 * Return: returns address of the new elemenet or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	
	current = *head;
	new_node = malloc(sizeof(dlistint_t));

	if(new_node == NULL)
	{
		return (NULL);
	}
		if (current == NULL)
	{
		new_node->next = current;
		new_node->prev = current;
		new_node->n = n;
		*head = new_node;
	}
	else
	{
		while(current->next != NULL)
		{
			current = current->next;
		}
		new_node->n = n;
		new_node->next = current->next;
		new_node->prev = current;
		current->next = new_node;
	}
	return (new_node);
}
