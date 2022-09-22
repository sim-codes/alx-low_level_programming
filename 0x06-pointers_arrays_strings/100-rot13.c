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

	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') ||
					(s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
			i++;
		}
		i++;
	}
	return (rot);
}
