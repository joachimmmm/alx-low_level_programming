#include "main.h"
#include <stdio.h>

/**
 * _puts - prints out a string
 * @str: the string to be passed
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
