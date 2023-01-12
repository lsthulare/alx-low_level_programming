#include "main.h"
#include <stdlib.h>

/**
 *  * _calloc - Allocates memory for an array using malloc func
 *    * @nmemb: The amount of elements.
 *     * @size: size used for each array element.
 *      *
 *       * Return: If nmemb = 0, size = 0, or the function fails - NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *rplc;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}

	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		return (NULL);
	}
	rplc =arr;
	for (index = 0; index < (size * nmemb); index++)
		rplc[index] = '\0';

	return (arr);
}
