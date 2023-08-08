#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments
 *
 * @ac: argument count
 * @av: argument vector
 * Return: the arguments
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, sl, wl;

	if (ac == 0 || av == NULL)
	{
		return (0);
	}

	sl = 0, k = 0;

	for (i = 0; i < ac; i++)
	{
		wl = 0;

		while (av[i][wl])
		{
			wl++;
		}
		sl = sl + wl + 1;
	}
	s = malloc((sl + 1) * sizeof(char));

	if (s == 0)
	{
		return (0);
	}
	for (j = 0; j < ac; j++)
	{
		wl = 0;

		while (av[j][wl])
		{
			s[k] = av[j][wl];
			k++;
			wl++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';

	return (s);
}
