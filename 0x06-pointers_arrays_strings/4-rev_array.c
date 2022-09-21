#include "main.h"

/**
 * reverse_array - Reverse an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	iint i;

	for (i = 0; i <= n / 2; i++)
	{
		char ch = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = ch;
	}
}
