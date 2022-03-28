#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_suc;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		if (access(filename, F_OK) == 0)
			return (1);
		else
			return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	for (; *text_content; text_content++)
	{
		w_suc = write(fd, text_content, 1);
		if (w_suc == -1)
			return (-1);
	}
	return (1);
}
