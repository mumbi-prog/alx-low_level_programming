#include "main.h"

/**
 * print_binary -  function that prints the binary representation of a number
 * @n: number
 *
 * Return: null
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		while (n >> 1)
		{
			print_binary(n >> 1);
			break;
		}
	_putchar((n & 1) + '0');
	}
	else
	{
	_putchar('0');
	}
}
