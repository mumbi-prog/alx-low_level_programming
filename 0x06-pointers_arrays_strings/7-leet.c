#include "main.h"

/**
 * leet - main entry point
 * Description: encodes a string into 1337s
 * @z: the string
 * Return: the new string
 */
char *leet(char *z)
{
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; z[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (z[i] == arr[j])
				z[i] = replace[j / 2];
		}
	}
	return (z);
}

