#include <stdlib.h>
#include "main.h"

/**
 * rev_string - Function that reverse a string
 * @s: string input
 */
void rev_string(char *s)
{
	int i, temp;
	int n = strlen(*s);

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
