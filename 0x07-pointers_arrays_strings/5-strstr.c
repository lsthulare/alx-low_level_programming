#include "main.h"

/**
 *  * _strstr - locates a substring
 *   *
 *    * @haystack: the longer string to search
 *     * @needle: the first occurrence of the substring
 *      *
 *       * Return: a pointer beg of substring or @Null if it not foound.
*/

char *_strstr(const char *haystack, const char *needle)
{
	size_t	cneed;
	size_t	chay;

	chay = 0;
	
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[chay] != '\0')
	{
		cneed = 0;
		while (haystack[chay + cneed] == needle[cneed])
		{
			if (needle[cneed + 1] == '\0')
				return ((char *)haystack + chay);
			cneed++;
		}
		chay++;
	}
	return (NULL);
}
