#include "lists.h"

void printfunc(void)__attribute__((constructor));

/**
 * printfunc - prints sentences to output before main
 * Return: void
 */
void printfunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
