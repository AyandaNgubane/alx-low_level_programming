#include <stdio.h>
#include <unistd.h>

/**
 * main - a program that prints out to stderr
 *
 * Return: 1 if successfull
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
