#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	int i;
	int r;
	int t;
	char *c;
	char *d;

	result = 0;
	c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	d = " !@#$%^&*()_+=-}{][|""':;|\\,./?><";

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		r = _strpbrk(argv[i], c);
		t = _strpbrk(argv[i], d);
		if (r != 0 && t != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result = result + atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
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
