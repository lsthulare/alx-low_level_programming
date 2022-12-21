#include "main.h"

/*
 * * swap - swaps the value of int a and int b
 * * @a: 1st int
 * * @b: 2nd int
 * * 
*/

void swap_int(int *a, int *b)
{

	int s;

	s = *a;
	*a = *b;
	*b = s;
}
