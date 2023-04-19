#include "function_pointers.h"
/**
 * array_iterator - array iterator
 * @array: the array
 * @size: size of array.
 * @action: name of func
 * Return: void
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int index;

	if (action != NULL && array != NULL && size > 0)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}	
