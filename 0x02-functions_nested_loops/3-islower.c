#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * Return: 1 if char is lowercase, otherwise 0.
 * @c: Is the int value to be compared with the ASCII value
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
