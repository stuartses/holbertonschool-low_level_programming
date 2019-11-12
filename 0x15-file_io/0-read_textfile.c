#include "holberton.h"

/**
 * read_textfile - read a file with File Descriptor
 * @filename: input file name
 * @letters: numbers of char to be readed
 *
 * Description: read a file with File Descriptor and prints it
 * Return: number of bytes request
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_o, file_r, file_w;
	char *conte;

	if (filename == NULL)
		return (0);

	conte = malloc(sizeof(char) * letters);
	file_o = open(filename, O_RDONLY);

	if (file_o == -1)
	{
		free(conte);
		return (0);
	}

	file_r = read(file_o, conte, letters);
	close(file_o);

	if (file_r == -1)
	{
		free(conte);
		return (0);
	}

	conte[letters] = '\0';

	file_w = write(STDOUT_FILENO, conte, file_r);

	if (file_w == -1)
	{
		free(conte);
		return (0);
	}

	free(conte);

	return (file_w);
}
