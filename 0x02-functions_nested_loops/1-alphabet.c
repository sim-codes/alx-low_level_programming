#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 *
 * Author: Segun Michael
 *
 * print_alphabet - This function prints alphabets in lower case
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
