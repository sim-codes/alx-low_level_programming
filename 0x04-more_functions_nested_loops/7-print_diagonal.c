#include "main.h"

/**
 * print_diagonal - A funtction that prints diagonal line on the terminal
 * @n: Number of times '\' should be printed
 * _putchar - prints each character out
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
