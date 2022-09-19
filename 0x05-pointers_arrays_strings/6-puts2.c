#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * puts2 - prints 1 char out of 2
 * @str: String input
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		putchar(str[i]);

	putchar('\n');
}
