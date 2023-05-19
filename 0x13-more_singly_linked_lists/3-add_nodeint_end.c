#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the added element
 *
 * Return: pointer to added node, or NULL if it fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *additional;
	listint_t *temp = *first;

	additional = malloc(sizeof(listint_t));
	if (!additional)
		return (NULL);
	additional->n = n;
	additional->next = NULL;
	if (*first == NULL)
	{
		*first = additional;
		return (additional);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = additional;
	return (additional);
}
