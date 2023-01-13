#include "main.h"
/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: allocated memory
 * Return: 0 means program was successful
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
