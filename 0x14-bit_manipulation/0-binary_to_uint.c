#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if there is
 * an invalid character or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = dec_val * 2 + (b[i] - '0');
	}
	return (dec_val);
}
