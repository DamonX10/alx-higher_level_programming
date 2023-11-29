#include "lists.h"
#include <stdlib.h>
/**
 * insert_node - Function for insert node in a sorted list
 * @head: pointer that or to pointer argument | accepts the node
 * @number: integer value be added and sorted the list
 * Return: --value--
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = number;
	}

	temp = *head;

	if (temp == NULL || temp->n >= number)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}

	while (temp && temp->next && (temp->next->n < number))
	{
		temp = temp->next;
	}

	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
