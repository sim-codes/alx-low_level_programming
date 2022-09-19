#include "main.h"

/**
 * _puts - A function that prints string to stdout
 * @str: Value to be printed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
