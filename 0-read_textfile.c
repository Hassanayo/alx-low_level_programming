#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints to the POSIX standard output
 * @filename: name of file to read
 * @letters: number of letters it should print
 * Return: number of letters it could print and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenr = read(fd, buffer, letters);
	close(fd);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
	{
		return (0);
	}
	return lenw;
}
