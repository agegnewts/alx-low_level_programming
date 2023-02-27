#include "main.h"
/**
 * swap_int - swaps the value of the integres a and b
 *
 * @a:  first integer to be swapped
 * @b: Second Integer to be swapped
 *
 */


void swap_int(int *a, int *b)
{
	int tempx;

	tempx = *a;
	*a = *b;
	*b = tempx;
}
