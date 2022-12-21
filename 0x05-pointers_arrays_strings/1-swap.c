#include "main.h"

/*
 * * swap - swaps the value of int a and int b
 * * Owned by user
 * * @a: 1st int
 * * @b: 2nd int
 * * return 0
 * * 
*/

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
