#include<stdlib.h>

/**
* free_grid - free a two dimwntioanl array
* @grid: the grid we will free up
* @height: the number of rows
* Return: Nothig
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
