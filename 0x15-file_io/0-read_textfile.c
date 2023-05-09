#include "main.h"

/**
 * read_textfile - reads a txt file.
 * @filename: name of file.
 * @letters: letters to be read.
 * Return: num of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t writer, reader, filep;
	char *space;

	filep = open(filename, O_RDONLY);
	if (filep == -1)
	{
		return (0);
	}
	space = malloc(letters * sizeof(char));
	reader = read(filep, space, letters);
	writer = write(STDOUT_FILENO, space, reader);
	free(space);
	close(filep);
	return (writer);
}
