#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Author: Segun Michael
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
