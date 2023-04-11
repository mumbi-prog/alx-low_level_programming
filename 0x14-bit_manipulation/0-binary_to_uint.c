#include "main.h"

/*
 * binary_to_uint - function that converts a binary number to an unsigned int
 * Description: function that converts a binary number to an unsigned int
 * @b: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int myvalue = 0;
	int i = 0;

	if (!b)
	return (0);

	do {
	if (b[i] == '0')
		myvalue <<= 1;
	else if (b[i] == '1')
	{
		myvalue <<= 1;
		myvalue |= 1;
	}
	else
		return (0);
	i++;
	} while (b[i]);

	return (myvalue);
}
