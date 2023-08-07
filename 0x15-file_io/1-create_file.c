#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of file to create
 * @text_content: String to write to the file
 *
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nletters, nb_write;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	nb_write = write(fd, text_content, nletters);

	if (nb_write == -1)
		return (-1);

	close(fd);

	return (1);
}
