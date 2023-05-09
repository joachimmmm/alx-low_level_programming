#include "main.h"

/**
 * create_file - creates file
 * @filename: name of file.
 * @text_content: texts of file content
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int filep;
	int index;
	int writer;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		for (index = 0; text_content[index];)
		{
			index++;
		}
	}
	filep = open(filename, O_CREAT | O_TRUNC | O_RDWR);
	writer = write(filep, text_content, index);
	if (writer == -1 || filep == -1)
	{
		return (-1);
	}
	close(filep);
	return (1);
}
