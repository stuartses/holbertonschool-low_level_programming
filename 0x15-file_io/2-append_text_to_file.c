#include "holberton.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: input file name
 * @text_content: string input
 *
 * Description: add new content at the end of file
 * Return: 1 if sucessfull or -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len, file_o, file_w;

	if (filename == NULL)
		return (-1);

	file_o = open(filename, O_APPEND | O_WRONLY);

	if (file_o == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		file_w = write(file_o, text_content, len);
		close(file_o);

		if (file_w == -1)
			return (-1);
	}
	return (1);
}
