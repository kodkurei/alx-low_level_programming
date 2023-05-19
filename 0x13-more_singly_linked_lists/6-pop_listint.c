#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: Pointer to the head node of the list
 *
 * Return: The data of the head node that was deleted, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
