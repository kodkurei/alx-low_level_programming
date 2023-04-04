#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to a pointer to the head node of the list
 * @idx: Index of the list where the new node should be added. Index starts at 0
 * @n: Data of the new node to be added
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current, *new_node;

	if (!head)
		return (NULL);
	current = *head;
	while (current)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(listint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			if (idx == 0)
			{
				new_node->next = *head;
				*head = new_node;
			}
			else
			{
				new_node->next = current;
				current = *head;
				while (i < idx - 1)
				{
					current = current->next;
					i++;
				}
				current->next = new_node;
			}
			return (new_node);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
