#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: string to be checked
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	int neg;
	int pos;
	unsigned int dig;

	neg = 0;
	pos = 0;
	dig = 0;
	i = 0;
	
	while (!((s[i] >= '0') && (s[i] <= '9')) && (s[i] != '\0'))
	{
		if (s[i] == '-')
		{
			neg++;
		}
		else if (s[i] == '+')
		{
			pos++;
		}
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9') && (s[i] != '\0'))
	{
		dig = (dig * 10) + (s[i] - '0');
		i++;
	}
	if (neg > pos)
	{
		dig = -(dig);
	}
	else
	{
		dig = dig;
	}
	return (dig);
}
