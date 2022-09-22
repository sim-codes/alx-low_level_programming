#include "main.h"

/**
 * _strcat - A function that concatenates 2 strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Returns an array of character
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}

	return (dest);

}
