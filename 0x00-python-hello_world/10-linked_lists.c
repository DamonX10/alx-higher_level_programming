#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints elements of a listint_t list
 * @h: pointer head of list
 * Return: number nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int n; /* number of nodes */

	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}

	return (n);
}
/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: pointer to pointer of the start of the list
 * @n: integer to included in node
 * Return: address the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
/**
 * free_listint - frees listint_t list
 * @head: pointer t to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
