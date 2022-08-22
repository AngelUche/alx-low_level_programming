#include "main.h"


/**
 * read_textfile - function to read text file
 *
 * @filename: filename
 * @letters: numbers of letters to be read
 * Return: numbers of letters to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t numr, numwr;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	numr = read(fd, buf, letters);
	numwr = write(STDOUT_FILENO, buf, numr);

	close(fd);

	free(buf);

	return (numwr);
}
