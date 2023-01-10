#include "main.h"
#include <stdlib.h>

/**
 *  * str_concat - Concatenates two strings.
 *   * @s1: The string to be concatenated upon.
 *    * @s2: The string to be concatenated to s1.
 *     *
 *      * Return: If concatenation fails - NULL.
 *       *         Otherwise - a pointer the newly-allocated space in memory
 *        *                     containing the concatenated strings.
*/

char	*str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char	*str;
	int len;
	int index;

	i = 0;
	j = 0;
	if (!s1 || !s2 == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
