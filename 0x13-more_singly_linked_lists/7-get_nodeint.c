#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head node of the list
 * @index: Index of the node, starting at 0
 *
 * Return: Pointer to the nth node of the list, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = head;
	for (i = 0; i < index; i++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	return (node);
}
