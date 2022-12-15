#include "main.h"

/**
 *  *  * print_line - This function prints a straight line in the terminal
 *   *   * @n: print
 *    *    * Return: printed line
*/

void print_line(int n)
{
	int index;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (index = 1; index <= n; index++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
