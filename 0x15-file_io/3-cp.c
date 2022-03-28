#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @ac: number of arguments
 * @av: array of string of arguments
 * Return: 0
 */
int main(int ac, char **av)
{
	int fd1, fd2, w_suc, nb, close1, close2;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (access(av[1], F_OK) != 0 || fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (0);
	while ((nb = read(fd1, buffer, 1024)) > 0)
	{
		w_suc = write(fd2, buffer, nb);
		if (w_suc == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	close1 = close(fd1);
	close2 = close(fd2);
	free(buffer);
	if (close1 == -1 || close2 == -1)
	{
		if (close1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		else
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
