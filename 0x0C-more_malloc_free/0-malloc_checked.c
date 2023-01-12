#include "main.h"
#include <stdlib.h>

/**
 *  * malloc_checked - allocates a block of memory using malloc
 *   * @b: space to allocate
 *    *
 *     * Return: pointer to allocated memory or normal process termination if null
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
