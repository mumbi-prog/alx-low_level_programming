#include "main.h"

/**
 * string_toupper - main entry point
 * Description: changes all lowercase letters of a string to uppercase
 * @a: letters to check
 * Return: uppercase letters
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] -= 32;
	}
	return (a);
}
