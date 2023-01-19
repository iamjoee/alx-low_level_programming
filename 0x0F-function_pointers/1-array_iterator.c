#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - calls a function to act on array elements
 * @array: array to execute func on
 * @size: is the size of the array
 * @action:  is a pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
