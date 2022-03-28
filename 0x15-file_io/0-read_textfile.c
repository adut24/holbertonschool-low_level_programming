#include "main.h"

/**
 * read_textfile -read a text file and print it to the standard output
 * @filename: name of the file to read
 * @letters: number of letters to print
 * Return: 0 or actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i;
	char *buffer;
	int w_suc, fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
		return (0);
	read(fd, buffer, letters);
	for (i = 0; i < letters; i++, buffer++)
	{
		w_suc = write(STDOUT_FILENO, buffer, 1);
		if (w_suc == -1)
			return (0);
		if (*buffer == '\0')
			break;
	}
	close(fd);
	free(buffer);
	return (i);
}
