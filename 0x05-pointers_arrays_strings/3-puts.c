#include "main.h"

/**
 *  * _puts - prints a string
 *   * @str: the string
 *    *
 *     * Return: the length of the string
*/

void _puts(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
	{
		return ;
	}
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
