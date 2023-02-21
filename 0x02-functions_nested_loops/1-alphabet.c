#include "main.h"

/**
 * print_alphabet - main entry point
 * Description: print alphabets in lowercase \n
 * Return: always 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
