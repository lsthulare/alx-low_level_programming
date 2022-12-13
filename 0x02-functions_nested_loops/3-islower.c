#include "main.h"

/**
 *  *  * _islower - Checks for lowercase character
 *   *   *
 *    *    * @c: using the ANSCII table
 *     *     *
 *      *      * Return: 1 (Pass) OR 0 (Error)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
