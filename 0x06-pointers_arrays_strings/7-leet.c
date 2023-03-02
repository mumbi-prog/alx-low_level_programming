#include "main.h"

/**
 * leet - main entry point
 * Description: encodes a string into 1337
 * You can only use one if in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 *
 * @a: the string
 *
 * Return: the new string
 */

char *leet(char *a)
{
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (a[i] == arr[j])
				a[i] = replace[j / 2];
		}
	}
	return (a);
}
