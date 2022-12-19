#include "main.h"
/**
 * _strlen -returns the length of a string
 * @s: char to check
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
