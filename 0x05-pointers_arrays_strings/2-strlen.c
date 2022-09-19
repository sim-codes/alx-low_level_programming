#include "main.h"

/**
 * _strlen - A function that returns the lenth of a string
 * @s: Array of characters input
 *
 * Return: Return a library function the get the string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
