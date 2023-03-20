#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: The int in question
 * Return: the abs of the int.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
