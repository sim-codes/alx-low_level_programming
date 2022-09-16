#include "main.h"

/**
 * print_line - A function that prints _ as line on the terminal
 * @n: Number of times lines should be printed
 * _putchar - prints each character out
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
