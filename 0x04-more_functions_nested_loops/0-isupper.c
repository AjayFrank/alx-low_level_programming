#include "main.h"
/**
 * _isupper - Check If a letter is upper
 * @x:The number to be checked
 * Return: 1 for upper letter or A for any else
*/
	int _isupper(int x)
{
	if (x >= 65 && x <= 98)
	{
	return (1);
	}
	return (0);
}