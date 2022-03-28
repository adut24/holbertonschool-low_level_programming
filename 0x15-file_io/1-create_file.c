#include "main.h"

/**
 * create_file - create a file
 * @filename: name to give to the file
 * @text_content: string to write in the file
 * Return: -1 for failure or 1 for success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_suc;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (; *text_content; text_content++)
	{
		w_suc = write(fd, text_content, 1);
		if (w_suc == -1)
			return (-1);
	}

	return (1);
}
