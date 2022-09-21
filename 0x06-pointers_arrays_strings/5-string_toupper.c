#include "main.h"

/**
 * string_toupper - A function that convert a char to upper case
 * @str: Array of characters
 *
 * Return: Returns array of characters
 */
char string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
