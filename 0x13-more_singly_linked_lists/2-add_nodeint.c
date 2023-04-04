#include "lists.h"
/**
 * add_nodeint - adds node at the beginning of a linked list
 * @head: pointer to first node
 * @n: data to inserted in new node
 *
 * Return: pointer to new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *additional;

	additional = malloc(sizeof(listint_t));
	if (!additional)
		return (NULL);
	additional->n = n;
	additional->next = *head;
	*head = additional;
	return (additional);
}
