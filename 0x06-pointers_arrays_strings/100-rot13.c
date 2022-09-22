#include "main.h"

/**
 * rot13 - A function that Encrypt and Decrypt a text
 * @rot: Array of char
 *
 * Return: Returns char
 */
char *rot13(char *rot)
{
	int i;

	for (i = 0; rot[i] != '\0'; i++)
	{
		while ((rot[i] >= 97 && rot[i] <= 122) ||
				(rot[i] >= 65 && rot[i] <= 90))
		{
			if (rot[i] >= 65 && rot[i] <= 77 || rot[i] >= 97 && rot[i] <= 109)
				rot[i] += 13;
			else
				rot[i] -= 13;
			i++;
		}
	}

	return (rot);
}
