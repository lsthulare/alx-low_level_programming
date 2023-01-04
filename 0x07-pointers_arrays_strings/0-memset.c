#include "main.h"

/**
 *  * _memset - function fill the first @n bytes of the memory area pointed
 *   * to by @s with the constant byte @b
 *    *
 *     * @n: bytes of the memory area pointed to by @s
 *      *
 *       * @s: with the constant byte @b
 *        *
 *         * @b: memory area pointer
 *          *
 *           * Return: a pointer to the memory area @s
*/

void *_memset(void *b, int c, size_t len)
{
	char *p;

	p = (char *)b;

	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}

	return (b);
}
