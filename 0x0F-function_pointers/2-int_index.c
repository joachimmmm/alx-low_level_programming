#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an int
 * @array: arr to be searched
 * @size: size of arr
 * @cmp: func
 * Return: the searched int
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int index;
	
	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
			{
				return (index);
			}
		}
	}
	return (-1);
}
