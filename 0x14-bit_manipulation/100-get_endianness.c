#include "main.h"
/**
 * get_endianness - function checks for endianness
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
