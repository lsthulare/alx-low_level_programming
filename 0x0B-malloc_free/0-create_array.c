#include "main.h"
#include <stdlib.h>

/**
 *  * function create_array - Creates array of chars and
 *   *                initializes it with choosen char
 *   @c: initial size of array
 *   @size: The number of stored characters
 *       * Return: If size == 0 or the function fails - NULL.
 *        *         Otherwise - a pointer to the array.
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
