#include "main.h"
/**
 * swap_int - a function that swaps the values of two int
 * @a: first int
 * @b: Second int
 * int c: addressed the swapped value will be sent to
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
