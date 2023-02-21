#include "main.h"

/**
 * _isalpha - main entry point
 * Description: checks for alphabetic character
 * @b: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int b)
{
	return ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'));
}
