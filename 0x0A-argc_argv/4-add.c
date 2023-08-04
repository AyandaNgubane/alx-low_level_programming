#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - similar function to strpbrk
 *
 * @s: string to check from
 * @accept: characters to check for
 * Return: result
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				goto end;
			}
		}
	}
end:
	return (s[i] != '\0' ? s + i : '\0');
}
/**
 * main - adds all arguments arguments
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful and 1 for an error
 */
int main(int argc, char *argv[])
{
	int result;
	int m;
	int r;
	int t;
	char *c;
	char *d;

	result = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (m = 0; m < argc; m++)
	{
		c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		d = " !@#$%^&*()_+=-}{][|:|\\,./?><";
		r = _strpbrk(argv[m], c);
		t = _strpbrk(argv[m], d);
		if (r != 0 && t != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result = result + atoi(argv[m]);
		}
	}
	printf("%d\n", result);
	return (0);
}
