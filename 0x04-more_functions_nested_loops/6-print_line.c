#include "main.h"

/**
 * print_line - main entry point
 * Description: draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
