#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Convert the params passed to the program to a string.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}
		i++;
		j = 0;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;

	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		j = 0;
		k++;
		i++;
	}

	k++;
	s[k] = '\0';
	return (s);
}
