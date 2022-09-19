#include "main.h"

/**
 * *_strcpy - Function tat copies the string pointed to by src
 * @dest: pointer input
 * @src: pointer input
 *
 * Return: Returns a character
 */
char *_strcpy(char *dest, char *src)
{
	for (int i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
