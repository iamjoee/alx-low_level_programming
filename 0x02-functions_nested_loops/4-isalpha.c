include "main.h"
/**
 * _isalpha - check if a char is lowercase
 * @c: unsigned int value to be compared with ASCII value
 * Return: 1 if its alphabet otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
