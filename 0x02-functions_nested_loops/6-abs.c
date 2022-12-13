#include "main.h"

/**
 *  *  * _abs - COmputes the absolute value of an integer
 *   *   *
 *    *    *@a: integers
 *     *     *
 *      *      * Return: Absolute value
*/

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
