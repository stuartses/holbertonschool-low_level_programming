#include "holberton.h"
#include <stdio.h>
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
	int file_o, file_r;
	char *conte;

	conte = malloc(sizeof(char) * letters);

	file_o = open(filename, O_RDONLY);

	if (file_o == -1)
		return (0);

	file_r = read(file_o, conte, letters);

	if (file_r == -1)
		return (0);

	conte[letters] = '\0';
	close(file_o);
	printf("%s\n", conte);
	free(conte);
	return (file_r);
}
