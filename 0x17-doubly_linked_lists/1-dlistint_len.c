#include"lists.h"
/**
 * dlistint_len-returns the number of elements in a dlistint_t
 * @h: Pointer to the head node of the list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;/* pointer to the current node */
	size_t count = 0;/* counter for the number of nodes*/
	while (current != NULL)
	{
		current = current->next;/* move to the next node */
		count++; /* increment the node counter*/
	}
	return (count);
}
