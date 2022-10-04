#include <stdlib.h>
/**
* alloc_grid - create a 2 dimentional array of intergers
* @width: rows of the 2D array
* @height: colums of 2D array
* Return: a pointer to the 2d array
*/

int **alloc_grid(int width, int height)
{
	int i, j,f, **alloc_mem;

	if (width < = 0 || height <= 0)
		return ('\0');

	alloc_mem = malloc(sizeof(int *) * height);

	if (alloc_mem == NULL)
	{
		free(alloc_mem);
		return ('\0');
	}

	if (alloc_mem == NULL)
	{
		free(alloc_mem);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		alloc_mem = malloc(sizeof(int) * width);

		if (alloc_mem[i] == NULL)
		{
			for (f = 1; f >= 0; f--)
				free(alloc_mem[f]);

			free(alloc_mem);
			return ('\0');
		}
		for (j = 0; j < width; j++)
			alloc_mem[i][j] = 0;
	}

	return (alloc_mem);
}
