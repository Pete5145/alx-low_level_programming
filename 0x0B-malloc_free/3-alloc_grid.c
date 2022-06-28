#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - It returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid.
 * @height: height of the grid
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int *grid;

	if (width == 0 || width < 0)
		return (NULL);

	if (height == 0 || height < 0)
		return (NULL);

	grid = malloc(sizeof(int) * (width + height));

	if (grid == NULL)
		return (NULL);

	grid[][] = 0;

	return (grid);
}
