#include "main.h"

/**
 * read_textfile -read a text file and print it to the standard output
 * @filename: name of the file to read
 * @letters: number of letters to print
 * Return: 0 or actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t nb;
	char *buffer;
	int w_suc, fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	nb = read(fd, buffer, letters);
	w_suc = write(STDOUT_FILENO, buffer, nb);
	if (w_suc == -1)
		return (0);
	close(fd);
	free(buffer);
	return (nb);
}
