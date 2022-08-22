#include "main.h"

/**
 * create_file - function to apend text
 *
 *@filename: file
 *@text_content: added text
 * Return: 1 sucess and -1 on failure
 */

int create_file(const char *filename, char *text_content)

{
	int fb;
	int numbers;
	int rwr;

	if (!filenmame)
		return (-1);
	fb = open(filename, O_WRONLY | APPEND);
	if (fb == -1)
		return (-1);
	if (text_content)
	{
	for (numbers = 0; text_content[numbers]; numbers++)
		;
	rwr = write(fb, text_content, numbers);
	if (rwr == -1)
		return (-1);
	}
close(fb);
return (1);
}
