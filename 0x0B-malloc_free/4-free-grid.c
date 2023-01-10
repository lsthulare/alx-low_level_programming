#include "main.h"
#include <stdlib.h>

/**
 *  * free_grid - frees a 2D board previously created by alloc_grid function.
 *   * @grid: the board to freed
 *    * @height: height of grid
 *     *
 *      * Return: void pointer
*/

void free_grid(int **grid, int height)
{
		int index;

			if (board == NULL || height <= 0)
						return;
				for (index = 0; index < height; index++)
							free(board[index]);
					freeboard);
}
