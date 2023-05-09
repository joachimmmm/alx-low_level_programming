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

	if (!filename)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (index = 0; text_content[index];)
		{
			index++;
		}
	}
	filep = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writer = write(filep, text_content, index);
	if (writer == -1 || filep == -1)
	{
		return (-1);
	}
	close(filep);
	return (1);
}
