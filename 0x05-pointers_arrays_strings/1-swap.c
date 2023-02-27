#include "main.h"

/**
 * swap_int - n entry point
 * Description: a function that swaps the values of two integers
 * @a: input the first integer
 * @b: input the second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
