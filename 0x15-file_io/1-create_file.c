#include "main.h"

/**
 *create_file - function to a file
 *
 * @filename: filename
 * @text_content: to be written in file.
 * Return: 1 on sucess and -1 on failure
 */

int create_file(const char *filename, char *text_content)

{

	int fb;
	int numbers;
	int rwr;

	if (!filename)
	return (-1);
	fb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fb == -1)
	return (-1);
	if (!text_content)
	text_content = "";
	for (numbers = 0; text_content[numbers]; numbers++)
		;
	rwr = write(fb, text_content, numbers);
	if (rwr == -1)
	return (-1);
	close(fb);
	return (1);
}
