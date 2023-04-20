#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds 2 ints
 * @a: first int
 * @b: second int
 * Return: sum of int
 */

int op_add(int a, int b)
{
	int ans;

	ans = (a + b);
	return (ans);
}

/**
 * op_sub - subtract func
 * @a: first int
 * @b: second int
 * Return: ans
 */
int op_sub(int a, int b)
{
	int sub_ans;

	sub_ans = (a - b);
	return (sub_ans);
}

/**
 * op_mul - multiplication func
 * @a: first int
 * @b: second int
 * Return: product of ints
 */
int op_mul(int a, int b)
{
	int mul_ans;

	mul_ans = (a * b);
	return (mul_ans);
}

/**
 * op_div - division func
 * @a: first int
 * @b: second int
 * Return: division of ints
 */
int op_div(int a, int b)
{
	int div_ans;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	div_ans = (a / b);
	return (div_ans);
}

/**
 * op_mod - modulo func
 * @a: first int
 * @b: second int
 * Return: modulo result
 */
int op_mod(int a, int b)
{
	int mod_ans;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	mod_ans = (a % b);
	return (mod_ans);
}
