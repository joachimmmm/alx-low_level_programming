#include <unistd.h>

/**
 * _putchar - puts character 2 stdout
 * @character: char
 * Return: 1 if successful
 */
int _putchar(char character)
{
	return(write(1, &character, 1));
}
