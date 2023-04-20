#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects correct func to perform op
 * @s: operator
 * Return: 0(success)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int index;

	index = 0;
	while (ops[index].op)
	{
		if (strcmp(ops[index].op, s) == 0)
		{
			return (ops[index].f);
			index++;
		}
	}
	return (0);
}
