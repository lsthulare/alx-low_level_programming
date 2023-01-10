#include "main.h"
#include <stdlib.h>

/**
 *  * alloc_grid - Returns a pointer to a 2-dimensional array
 *    * @width: width size of a 2-dimensional array.
 *     * @height: The height of the dimensional array
 *       * Return: If width <= 0, height <= 0, or the function fails - NULL.
*/

int **alloc_grid(int width, int height)
{
	int **dimen;
	int length, row;

	if (width <= 0 || height <= 0)
		return (NULL);

	dimen = malloc(sizeof(int *) * height);

	if (dimen == NULL)
		return (NULL);

	for (length = 0; length < height; length++)
	{
		dimen[length] = malloc(sizeof(int) * width);

		if (dimen[length] == NULL)
		{
			for (; length >= 0; length--)
				free(dimen[length]);

			free(dimen);
			return (NULL);
		}
	}
	for (length = 0; length < height; length++)
	{
		for (row = 0; row < width; row++)
			dimen[length][row] = 0;
	}

	return (dimen);
}
