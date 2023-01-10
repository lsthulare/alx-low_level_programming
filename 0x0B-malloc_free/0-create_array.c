#include "main.h"
#include <stdlib.h>

/**
 *  * function create_array - Creates array of chars and
 *   *                initializes it with choosen char
 *       * Return: If size == 0 or the function fails - NULL.
 *        *         Otherwise - a pointer to the array.
*/

char *create_array(unsigned int size, char c)
{
	char *ar;
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
