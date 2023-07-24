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
	int sign;

	neg = 0;
	pos = 0;
	dig = 0;
	i = 0;
	sign = 1;
	
	while (!((s[i] >= '0') && (s[i] <= '9')) && (s[i] != '\0'))
	{
		if (s[i] == '-')
		{
			sign = -(sign);
		}
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9') && (s[i] != '\0'))
	{
		dig = (dig * 10) + (s[i] - '0');
		i++;
	}
	dig = dig * sign;
	return (dig);
}
