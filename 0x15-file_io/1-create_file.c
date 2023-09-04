#include "main.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, len_w;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len] != '\0'; len++)
		continue;

	len_w = write(fd, text_content, len);

	if (len_w == -1)
		return (-1);

	close(fd);

	return (1);
}
