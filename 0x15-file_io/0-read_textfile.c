#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Function that reads a file and prints it to
 * the standard POSIX standard output
 * @filename: The name of the file
 * @letters: No. of letters it should read and print
 *
 * Return: The no. of letters it could read and print
 * 0 on errors
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nb_read, nb_write;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	nb_read = read(fd, buf, letters);
	nb_write = write(STDOUT_FILENO, buf, nb_read);

	close(fd);
	free(buf);

	return (nb_write);
}
