#include "main.h"
#include <stdlib.h>
/**
 * _alloc_grid - creates a 2-d array of ints
 * @width: columns of the array
 * @height: rows of the array
 *
 * Return: pointer to 2-d array.
 *  NULL if height/width is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (height == 0 || width == 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);
	if (arr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			for (j =0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
		return (arr);
	}
	else
		return (NULL);
}
