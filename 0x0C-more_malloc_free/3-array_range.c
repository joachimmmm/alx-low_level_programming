#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an int arr
 * @min: mininum num of int
 * @max: max num of int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *arr;
	int index = 0;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(((max - min) * sizeof(int)) + sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index <= max - min; index++)
	{
		arr[index] = min + index;
	}
	return (arr);
}
