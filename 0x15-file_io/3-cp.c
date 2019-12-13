#include "holberton.h"
#include <string.h>

/**
 * _outputerror - prints a output error
 * @file_out: file name
 * @msg_out: output menssage
 * @stus_id: exit status code
 *
 * Description: write output error message in the standard error output
 * Return: void
 */
void _outputerror(const char *file_out, char *msg_out, int stus_id)
{
	write(STDERR_FILENO, msg_out, strlen(msg_out));
	write(STDERR_FILENO, file_out, strlen(file_out));
	write(STDERR_FILENO, "\n", 1);
	exit(stus_id);
}

/**
 * _cp - copy the content from a file to other
 * @file_from: origin file
 * @file_to: destination file
 *
 * Description: copy the content form a file to another
 * Return: void
 */
void _cp(const char *file_from, const char *file_to)
{
	int from_o, from_r, fileto_o, fileto_w;
	char *buffer;

	/* Open origin file*/
	from_o = open(file_from, O_RDONLY);
	if (from_o == -1 || file_from == NULL)
		_outputerror(file_from, "Error: Can't read from file ", 98);

	/* create destination file */
	fileto_o = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (fileto_o == -1)
	{
		close(from_o);
		_outputerror(file_to, "Error: Can't write to ", 99);
	}

	buffer = malloc(sizeof(char) * 1024);
	while ((from_r = read(from_o, buffer, 1024)) != 0)
	{
		if (from_r == -1)
		{
			close(fileto_o);
			close(from_o);
			free(buffer);
			_outputerror(file_from, "Error: Can't read from file ", 98);
		}
		fileto_w = write(fileto_o, buffer, from_r);
		if (fileto_w == -1)
		{
			close(fileto_o);
			close(from_o);
			free(buffer);
			_outputerror(file_to, "Error: Can't write to ", 99);
		}
	}
	close(from_o);
	close(fileto_o);
	free(buffer);
}

/**
 * main - receives two input name files from shell
 * @ac: number of input elements
 * @av: array of inputs
 *
 * Description: read the names of two files to copy
 * Return: void
 */

int main(int ac, char **av)
{
	if (ac != 3)
		exit(97);

	_cp(av[1], av[2]);
	return (0);
}
