#include "main.h"
/**
 *  * _strlen - return the length of a string
 *    * @s: char to check
 *     * Description: this will return the length of a string
 *      * Return: 0 is success
*/

size_t	ft_strlen(const char *s)
{
	size_t	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}
