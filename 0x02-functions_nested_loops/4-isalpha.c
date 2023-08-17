#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: To be checked
 * Return: 1 for lowercase and 0  for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
{
	return (1);
}
	return (0);
}
