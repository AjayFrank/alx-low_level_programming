#include "main.h"

/**
 * _memset - Entry point
 * @s: Pointer to the destination memory area
 * @b: Constant byte to fill the memory with
 * @n: Number of bytes to fill
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
