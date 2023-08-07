#include "main.h"

/**
 * err_no - checks if the files exist or can be opened
 * @file_from: File to copy from
 * @file_to: File to copy to
 * @argv: Arguments passed
 *
 * Return: void
 */
void err_no(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checks the code
 * @argc: No. of arguments
 * @argv: Arguments passed
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int file_to, file_from, err_close;
	ssize_t nb_read, nb_write;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_no(file_from, file_to, argv);

	nb_read = 1024;

	while (nb_read == 1024)
	{
		nb_read = read(file_from, buf, 1024);
		if (nb_read == -1)
			err_no(-1, 0, argv);
		nb_write = write(file_to, buf, nb_read);
		if (nb_write == -1)
			err_no(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
