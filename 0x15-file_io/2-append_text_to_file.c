#include "main.h"

/**
 * append_text_to_file - Appends a text at the end of a file
 * @filename: Name of the file to append to
 * @text_content: Null terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nb_write, nletters;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		nb_write = write(fd, text_content, nletters);

		if (nb_write == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
