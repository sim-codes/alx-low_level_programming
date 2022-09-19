#include <stdio.h>
#include "main.h"

/**
 * print_array - A function that prints n numbers of Array
 * @a: Array input
 * @n: lenth of array
 */
void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}
	printf("\n");
}
