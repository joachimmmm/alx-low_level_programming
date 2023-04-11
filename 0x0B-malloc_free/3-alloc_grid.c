#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a ptr to a 2 dimensional arr
 * @width: width of arr
 * @height: height of arr
 * Return: NULL is height /width = 0
 */

int **alloc_grid(int width, int height)
{
	int a, b, y, z;
	int **ptr;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(sizeof(int) * width);

		if (ptr[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(ptr[b]);
			}

			free(ptr);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
		{
			ptr[y][z] = 0;
		}
	}
	return (ptr);
}
