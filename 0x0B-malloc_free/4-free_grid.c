#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional array of integers
 * @grid: The array of integers
 * @height: The number of rows in the array
 *
 * Return: void
 */
void free_grid(int **grid, int height __attribute__((unused)))
{
	free(grid);
}
