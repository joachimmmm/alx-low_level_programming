#include "main.h"

void fileclose_func(int file_des);

char *buffercreator_func(char *filenames);
/**
 * fileclose_func - closes down file descriptors used.
 * @file_des: the said file descriptors used.
 * Return: void
 */
void fileclose_func(int file_des)
{
	int closer;

	closer = close(file_des);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE%d\n", file_des);
		exit(100);
	}
}

/**
 * buffercreator_func - allocs space
 * @filenames: file name
 * Return: ptr
 */
char *buffercreator_func(char *filenames)
{
	char *buffspace;

	buffspace = malloc(1024 * sizeof(char));
	if (!buffspace)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filenames);
		exit(99);
	}
	return (buffspace);
}

/**
 * main - entry point
 * @argc: arg counter.
 * @argv: arg vector.
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int writer;
	int reader;
	int opener;
	int opener2;
	char *buffspace;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffspace = buffercreator_func(argv[2]);
	opener = open(argv[1], O_RDONLY);
	reader = read(opener, buffspace, 1024);
	opener2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (reader > 0)
	{
		if (opener == -1 || reader == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffspace);
			exit (98);
		}
		writer = write(opener2, buffspace, reader);
		if (writer == -1 || opener2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffspace);
			exit(99);
		}
		reader = read(opener, buffspace, 1024);
		opener2 = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffspace);
	fileclose_func(opener);
	fileclose_func(opener2);
	return (0);
}
