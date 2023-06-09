#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
