#include "main.h"

/**
 * print_binary -  function that prints the binary representation of a number
 * @n: number
 *
 * Return: null
 */
void print_binary(unsigned long int n)
{
	unsigned long int a = 1;
	int b = 0;

	do {
		b++;
	} while ((n >> b) > 0);

	do {
		a <<= 1;
		_putchar(((n & a) == 0) ? '0' : '1');
		b--;
	} while (b >= 0);

	if (n == 0)
	_putchar('0');
}
