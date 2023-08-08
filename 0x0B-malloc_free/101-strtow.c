#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words
 *
 * @str: string
 * Return: results
 */
char **strtow(char *str)
{
	char **s;
	char *srt;
	int i, j, k, l, m, wc, fr;

	if (str == NULL || *str == 0)
		return (0);
	fr = 0;
	wc = word_count(str);
	if (wc == 0)
		return (0);
	s = malloc((wc + 1) * sizeof(char *));
	if (s == 0)
		return (0);
	srt = sort_string(str);
	for (i = 0; i < wc; i++)
	{
		l = 0;
		while (srt[l] != ' ' && srt[l] != 0)
			l++;
		s[i] = malloc((l + 1) * sizeof(char));
		if (s[i] == 0)
		{
			fr = 1;
			break;
		}
		for (j = 0, m = 0; m < l; m++, j++)
			s[i][j] = srt[m];
		s[i][j] = '\0';
		srt = sort_string(srt + l);
	}
	s[i] = NULL;
	if (fr == 1)
	{
		for (k = 0; k <= i; k++)
			free(s[k]);
		free(s);
	}
	return (s);
}
/**
 * word_count - counts number of words
 *
 * @s: string to check
 * Return: result
 */
int word_count(char *s)
{
	int l, wc;

	l = 0, wc = 0;
	if (s[l] == ' ')
		l++;
	while (s[l])
	{
		if (s[l] == ' ' && s[l - 1] != ' ')
			wc++;
		if (s[l] != ' '  && s[l + 1] == 0)
			wc++;
		l++;
	}
	return (wc);
}
/**
 * sort_string - removes trailing spaces on string
 * @stn: string to be checked
 *
 * Return: Pointer
 */
char *sort_string(char *stn)
{
	while (*stn == ' ')
		stn++;
	return (stn);
}
