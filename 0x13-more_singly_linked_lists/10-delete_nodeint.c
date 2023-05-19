#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to a pointer to the first node of the list
 * @index: index of the node to delete, starting at 0
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i;

	if (*head == NULL) /* empty list */
		return (-1);
	if (index == 0) /* special case: remove head */
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	/* find the node to remove, and its predecessor */
	prev = NULL;
	current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL) /* index out of range */
		return (-1);
	/* remove the node */
	prev->next = current->next;
	free(current);
	return (1);
}
