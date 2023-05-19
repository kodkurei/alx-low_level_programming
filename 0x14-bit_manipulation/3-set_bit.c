#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - Sets the value of a bit at a given index to 1.
 *
 * @n: A pointer to an unsigned long int, whose bit will be set.
 * @index: The index of the bit to set.
 *
 * Return: If an error occurs, return -1.
 * Otherwise, return 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Return -1 if index is out of range */
	}
	*n |= (1ul << index); /* Set the bit at the given index to 1 */
	return (1);  /* Return 1 to indicate success */
}
