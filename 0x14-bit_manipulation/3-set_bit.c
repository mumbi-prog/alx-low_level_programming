#include "main.h"

/*
 * set_bit: function that sets the value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int v = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	for (unsigned int i = 0; i < index; i++)
		v <<= 1;

	*n |= v;
	return (1);
}
