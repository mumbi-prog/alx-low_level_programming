#include "main.h"

/**
 * print_alphabet_x10 - main entry point
 * Description: a function that prints 10 times the alphabet,
 * in lowercase \n
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char abc;
	int i;

	i = 0;

	while (i < 10)
	{
		abc = 'a';
		while (abc <= 'z')
		{
			_putchar(abc);
			abc++;
		}
		_putchar('\n');
		i++;
	}
}
