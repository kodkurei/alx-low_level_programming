#include "main.h"
/**
 * binary_to_uint - Convert a binary number string to an unsigned integer.
 *
 * @b: A string containing the binary number to convert.
 *
 * Return: The converted number, or 0 if the input string is invalid.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (b == NULL)
		return (0);
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val = val * 2 + (b[i] - '0');
	}
	return (val);
}
