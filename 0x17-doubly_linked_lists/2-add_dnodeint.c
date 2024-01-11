#include "lists.h"
/**
 * add_node - function that adds a node to the begining of the list
 * @head: The head of the list
 * @n: The value of the node
 * Return: returns address of the new elemenet or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	
	current = *head;
	new_node = malloc(sizeof(dlistint_t));

	if(new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current;
	if(current != NULL)
	{
		current->prev = new_node;
	}
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
