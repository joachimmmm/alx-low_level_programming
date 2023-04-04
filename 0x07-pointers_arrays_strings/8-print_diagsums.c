#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: the array
 * @size: the size of the array
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int y;
	int z;
	int num_1;
	int num_2;

	for (y = 0; y <= ((size) * (size)); y = y + size + 1)
	{
		num_1 = num_1 + a[y];
	}
	for (z = size - 1; z <= ((size) * (size)); z = z + size - 1)
	{
		num_2 = num_2 + a[z];
	}
	printf("%d, %d\n", num_1, num_2);
}
