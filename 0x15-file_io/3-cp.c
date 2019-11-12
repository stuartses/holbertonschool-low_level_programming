#include "holberton.h"
#include <string.h>
void _cp(const char *file_from, const char *file_to)
{
	int from_o, from_r, fileto_o, fileto_w;
	int len_outext;
	char *output_text;

	/* Open origin file*/
	from_o = open(file_from, O_RDONLY);
	if (from_o == -1)
	{
		output_text = strcat("Error: Can't read from file ", file_from);
		len_outext = strlen(output_text);
		write(STDERR_FILENO, output_text, len_outext);
		exit(98);
	}
	/* create destination file */
	fileto_o = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (fileto_o == -1)
	{
		output_text = strcat("Error: Can't write to ", file_to);
		len_outext = strlen(output_text);
		write(STDERR_FILENO, output_text, len_outext);
		exit(99);
	}

	from_r = read (;

		       /*
			 pasos:
			 leer de origen (usar read)
			 escribir en destino lo leido en origen (usar write)
			 Se debe limitar el read a 1024 bytes por vez 
(Avriguar como hacerlo. Los primeros 1024 se hacen con malloc, pero los situiguientes?
			*/
}

int main(int ac, char **av)
{
	if (ac != 3)
		exit(97);

	_cp(av[1], av[2]);
}
