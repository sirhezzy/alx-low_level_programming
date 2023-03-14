#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer
 */
int **alloc_grid(int width, int height)
{
	int **two_dimension;
	int hgt_index;
	int wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dimension = malloc(sizeof(int *) * height);

	if (two_dimension == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		two_dimension[hgt_index] = malloc(sizeof(int) * width);

		if (two_dimension[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(two_dimension[hgt_index]);

			free(two_dimension);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			two_dimension[hgt_index][wid_index] = 0;
	}

	return (two_dimension);
}
