#include "main.h"

/**
 * print_rev - A function that prints strings in reverse
 * @s: string input
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
