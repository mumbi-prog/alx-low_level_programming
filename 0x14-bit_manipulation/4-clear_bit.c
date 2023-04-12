#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: 1 if it worked, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int u;

	if (index > 63)
		return (-1);

	u = 1 << index;

	if (*n & u)
		*n ^= u;

	return (1);
}
