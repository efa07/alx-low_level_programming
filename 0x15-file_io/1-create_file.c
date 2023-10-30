#include "main.h"

/**
 * create_file - create a file
 * @filename: filename.
 * @text_content: content of file.
 * Return: 1 on success. -1 on fails.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd;
	ssize_t nletters, rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	nletters = strlen(text_content);
	rwr = write(fd, text_content, nletters);

	close(fd);

	if (rwr == -1 || rwr != nletters)
		return (-1);

	return (1);
}
