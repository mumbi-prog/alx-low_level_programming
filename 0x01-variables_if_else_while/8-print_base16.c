#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry point
 * Description - print base 16 numbers
 * Return: Always 0
 */
int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
