#include "main.h"

/**
 * print_numbers - A function that prints numbers from 0 to 9
 * _putchar - prints each character out
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
