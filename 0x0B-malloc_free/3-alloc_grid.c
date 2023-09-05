#include "main.h"

/**
 * **alloc_grid - return 2 dimensional array of integers.
 * @width: input
 * @height: input
 * Return: mat
 */
int **alloc_grid(int width, int height)
{
	int i, j, **mat;

	mat = malloc(sizeof(*mat) * height);

	if (width <= 0 || height <= 0 || mat == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			mat[i] = malloc(sizeof(**mat) * width);
			if (mat[i] == 0)
			{
				while (i--)
					free(mat[i]);
				free(mat);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				mat[i][j] = 0;
		}
	}

	return (mat);
}
