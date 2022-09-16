#include "main.h"

/**
 * print_diagonal - A funtction that prints diagonal line on the terminal
 * @n: Number of times '\' should be printed
 * _putchar - prints each character out
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
