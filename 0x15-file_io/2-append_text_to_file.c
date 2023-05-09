#include "main.h"

/**
 * append_text_to_file - appends text to file end.
 * @filename: name of file.
 * @text_content: contents of text
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int index = 0;
	int writer;
	int opener;

	if (!filename)
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
	opener = open(filename, O_WRONLY |O_APPEND);
	writer = write(opener, text_content, index);
	if (writer == -1 || opener == -1)
	{
		return (-1);
	}
	close(opener);
	return (1);
}


