#include "main.h"

/**
 * more_numbers - A function that prints numbers from 0 to 9
 * _putchar - prints each character out
 */

void more_numbers(void)
{
	char i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
