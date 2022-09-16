#include "main.h"

/**
 * print_line - A function that prints _ as line on the terminal
 * @n: Number of times lines should be printed
 * _putchar - prints each character out
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
