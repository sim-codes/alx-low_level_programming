#include "main.h"

/**
 * print_square - A funtction that prints square line on the terminal
 * @size: Is the size of square
 * _putchar - prints each character out
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
