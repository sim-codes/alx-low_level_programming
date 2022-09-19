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
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
