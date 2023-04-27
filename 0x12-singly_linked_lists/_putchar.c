#include "lists.h"

/**
 * _putchar - prints out a single char to output
 * @st: char
 * Return: char to output
 */
int _putchar(char st)
{
	int results;

	results = write(1, &st, 1);
	return (results);
}
