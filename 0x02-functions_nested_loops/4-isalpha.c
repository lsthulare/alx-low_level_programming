#include "main.h"

/**
 *  *  * _isalpha - Checks for Alphabetic Characters
 *   *   *
 *    *    * @c: Alphabatic function
 *     *     *
 *      *      * Return: 1 (Pass) OR 0 (Error)
 *       */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
