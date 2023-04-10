#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bits = 0;

	while (xor != 0)
	{
		bits += xor & 1; /* Add 1 to bits if the least significant bit of xor is 1 */
		xor >>= 1; /* Shift xor to the right by 1 bit */
	}
	return (bits); /* Return the number of bits that need to be flipped */
}
