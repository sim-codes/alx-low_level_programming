#include "main.h"
/**
 * print_alphabet_x10 - This function prints alphabets in lower case
 */
void print_alphabet_x10(void)
{
	char ch;
	int n = 10;

	while(n != 0)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		n--;
	}
}
