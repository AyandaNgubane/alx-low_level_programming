#include "main.h"
/**
  * is_palindrome - checks if string is palindrome
  * @s: string to be checked
  *
  * Return: integer
  */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (_palindrome(s));
}

/**
  * _palindrome - checks if string is palindrome
  * @s: string to be checked
  *
  * Return: integer 
  */
int _palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
  * _strlen_recursion - Get the length of a string
  * @s: the string to get the length
  *
  * Return: the string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
