#include "main.h"

/**
 * leet - Leet (1337) funtion
 * @str: Array of characters
 *
 * Return: Returns characters
 */
char *leet(char *str)
{
	char sl[6] = {'a', 'e', 'o', 't', 'l'};
	char cl[6] = {'A', 'E', 'O', 'T', 'L'};
	char num[6] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; i < 6; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] == sl[i] || str[j] == cl[i])
			{
				str[j] = num[i];
			}
		}
	}
	return (str);
}
