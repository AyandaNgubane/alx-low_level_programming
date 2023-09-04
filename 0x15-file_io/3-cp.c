#include "main.h"

/**
 * main - starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_cpy(argv[1], argv[2]);
	exit(0);
}

/**
  * file_cpy - copies file content into another
  * @orig: file to copy from
  * @cpy: file to copy to
  * Return: void
  */
void file_cpy(const char *orig, const char *cpy)
{
	int fd_orig, fd_cpy, len_r;
	char buffer[1024];

	fd_orig = open(orig, O_RDONLY);
	if (orig == NULL || fd_orig == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", orig);
		exit(98);
	}

	fd_cpy = open(cpy, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((len_r = read(fd_orig, buffer, 1024)) > 0)
	{
		if (fd_cpy == -1 || write(fd_cpy, buffer, len_r) != len_r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", cpy);
			exit(99);
		}
	}

	if (len_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", orig);
		exit(98);
	}

	if (close(fd_orig) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_orig);
		exit(100);
	}

	if (close(fd_cpy) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_cpy);
		exit(100);
	}
}
