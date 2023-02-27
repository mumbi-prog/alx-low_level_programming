#include "main.h"

/**
 * print_rev - main entry point
 * Description: prints a string in reverse
 * @s: the string to print
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
