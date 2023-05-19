#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 *
 * @n: A pointer to an unsigned long int, whose bit will be cleared.
 * @index: The index of the bit to clear.
 *
 * Return: If an error occurs, return -1.
 * Otherwise, return 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Return -1 if index is out of range */
	}
	*n &= ~(1ul << index); /* Clear the bit at the given index */
	return (1); /* Return 1 to indicate success */
}
