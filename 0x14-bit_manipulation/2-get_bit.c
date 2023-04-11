#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int r = 0;

	if (index > 63)
	return (-1);

	do {
		if (index == r)
		return (n & 1);
	n >>= 1;
	r++;
	} while (n != 0);

	return (0);
}

