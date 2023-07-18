#include "main.h"

/**
 * main - Write a function that checks for lowercase character. 
 *
 * Return: 0 if successful
 */
int _islower(int c)
{
	int i;
	int j;

	i = 'A';
	j = 'a';

	while(j < 123)
	{
		if(c == j)
		{
			return (1);
		}
		j++;
	}
	while(i < 91)
	{
		if(c == i)
		{
			return(0);
		}
		i++;
	}
}
