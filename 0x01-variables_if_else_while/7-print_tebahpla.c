#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: the program returns an alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
