#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: result
 */
int main(int argc, char *argv[])
{
	int a1, a2, main_ans;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);

	function = get_op_func(argv[2]);

	if (!function)
	{
		printf("Error\n");
		exit(98);
	}
	main_ans = function(a1, a2);
	printf("%d\n", main_ans);
	return (0);
}
