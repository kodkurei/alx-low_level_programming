#ifndef MAIN_H
#define MAIN_H

/* Convert a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* Print the binary representation of a number */
void print_binary(unsigned long int n);

/* Get the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Set the value of a bit at a given index to 1 */
int set_bit(unsigned long int *n, unsigned int index);

/* Set the value of a bit at a given index to 0 */
int clear_bit(unsigned long int *n, unsigned int index);

/* Return the number of bits needed to flip to get from one number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Convert a string to an integer */
int _atoi(const char *s);

/* Print a single character */
int _putchar(char c);

/* Check the endianness of the machine */
int get_endianness(void);

#endif
