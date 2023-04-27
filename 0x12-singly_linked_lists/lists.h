#ifndef HEADER_H
#define HEADER_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: point to the next node
 *
 * Desrcription: singly linked list node structure
 */
#include <stdlib.h>
#include <stdio.h>

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char st);

size_t print_list(const list_t *h);

#endif
