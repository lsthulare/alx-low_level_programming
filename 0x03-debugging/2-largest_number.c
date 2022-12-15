#include "main.h"

/**
 *  *  * largest_number  - prints largest of 3 numbers
 *   *   * @a: first num
 *    *    * @b: second num
 *     *     * @c: third num
 *      *      * Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}

	return (largest);
}
