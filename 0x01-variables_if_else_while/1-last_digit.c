#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Author: Segun Michael
 */
int main(void)
{
	int n, *l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = &n[0];
	printf("The last digit of %d is", *l);
	return (0);
}
