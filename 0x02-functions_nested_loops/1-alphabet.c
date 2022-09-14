#include "main.h"
/**
 * Author: Segun Michael
 *
 * print_alphabet - This function prints alphabets in lower case
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
