#include "main.h"
/**
 * print_to_98 - main entry point
 * Description:  function that prints all natural numbers from n to 98\n
 * @n: starting integer
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
