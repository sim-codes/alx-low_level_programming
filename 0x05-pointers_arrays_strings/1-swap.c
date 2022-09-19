#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: First value input
 * @b: Second value input
 */
void swap_int(int *a, int *b)
{
	int bVal = *a;
	*a = *b;
	*b = bVal;
}
