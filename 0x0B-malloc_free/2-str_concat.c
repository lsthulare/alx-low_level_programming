#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  * str_concat - Concatenates two strings.
 *   * @s1: The string to be concatenated upon.
 *    * @s2: The string to be concatenated to s1.
 *      * Return:when concatenation fails - NULL is returned
 *        Otherwise the concatenated strings are printed
*/

char *str_concat(char *s1, char *s2)
{
	char *str_space;
	int i, count = 0, len = 0;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	str_space = malloc(sizeof(char) * len);

	if (str_space == 0)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str_space[count++] = s1[i];

	for (i = 0; s2[i]; i++)
		str_space[count++] = s2[i];

	return (str_space);
}
