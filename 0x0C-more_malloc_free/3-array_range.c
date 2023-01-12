#include "main.h"
#include <stdlib.h>

/**
 *  * array_range - Creates an array of sorted integers
 *    * @min: The first value of the array.
 *     * @max: The last value of the array.
 *      *
 *       * Return: If min > max or the function fails - NULL.
*/

int *array_range(int min, int max)
{
	int *array;
       	int i, space;

	if (min > max)
	{
		return (NULL);
	}

	space = max - min + 1;

	array = malloc(sizeof(int) * 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < space; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
