#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
		char	*dst;
			char	*src;

				dst = s1;
					src = (char *)s2;
						while (*dst)
									dst++;
							while (*src)
									{
												*dst = *src;
														dst++;
																src++;
																	}
								*dst = '\0';
									return (s1);
}

int main(void)
{
	    char *s;

	        s = str_concat("Betty ", "Holberton");
		    if (s == NULL)
			        {
					        printf("failed\n");
						        return (1);
							    }
		        printf("%s\n", s);
			    free(s);
			        return (0);
}
