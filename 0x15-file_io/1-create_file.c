#include "main.h"
/**
 * create_file -creates an array of chars
 * @text_content: is a NULL terminated string to write to the file
 * @filename: name of the file to be created
 * Return: 1 if successfull and -1 on err
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fild = 0, chk = 0, i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fild = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fild < 0)
		return (-1);

	while (text_content[i])
		i++;
	chk = write(fild, text_content, i);
	if (chk < 0)
		return (-1);

	close(fild);
	return (1);
}
