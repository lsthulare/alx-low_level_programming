#include "main.h"
#include <stdlib.h>

/**
 *  * _strdup - copy a string to a newly allocated space in memory
 *   * @str:copy string
 * Return: address to duplicated string or NULL if null
*/

char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i+)
		;
	i++;

	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
