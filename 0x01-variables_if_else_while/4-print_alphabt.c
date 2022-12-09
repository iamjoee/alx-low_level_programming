#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'the program returns alphabets'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		char ch = 'a';

		while (ch <= 'z')
		{
			if ((ch != 'e') && (ch != 'q'))

			{
				putchar(ch);
			}
			ch++;
		}
		putchar('\n');
		return (0);
}
