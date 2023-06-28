#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @d: integer to swap
 * @e: integer to swap
 */
void swap_int(int *d, int *e)
{
	int n;

	n = *d;
	*d = *e;
	*e = n;
}
