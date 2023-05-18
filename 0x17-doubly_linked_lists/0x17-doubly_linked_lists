#include"lists.h"
/**
 *print_dlistint-Function that prints all the elements of a dlistint_t
 *@h: Pointer to the head node of the list
 *Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;/* pointer to the current node */
size_t count = 0;/* counter for the number of nodes*/
while (current != NULL)
{
printf("%d\n", current->n);/* print the value of the node */
current = current->next;/* move to the next node */
count++; /* increment the node counter*/
}
return (count);
}
