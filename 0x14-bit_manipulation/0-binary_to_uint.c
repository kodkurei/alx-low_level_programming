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
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) | (*b++ - '0');
	}
	return (result);
}
int main(void)
{
	const char *var1 = "10101010";
	const char *var2 = "1000012";
	const char *var3 = "1000010";

	printf("%s = %u\n", binary1, binary_to_uint(var1));
	printf("%s = %u\n", binary2, binary_to_uint(var2));
	printf("%s = %u\n", binary3, binary_to_uint(var3));
	return (0);
}
