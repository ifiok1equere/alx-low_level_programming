#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file and prints to stdout
 * @filename: absolute path to text file
 * @letters: number of bytes of letters to be read and printed
 *
 * Return: the actual number of letters read and printed to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename != NULL)
	{
		int fd;
		char *buffer;
		ssize_t r_count, w_count;

		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

		buffer = malloc(letters + 1);
		if (buffer == NULL)
			return (0);
		buffer[letters] = '\0';

		r_count = read(fd, buffer, letters);
		if (r_count == -1)
			return (0);

		w_count = write(STDOUT_FILENO, buffer, r_count);
		if (w_count == -1)
			return (0);

		if (r_count != w_count)
			return (0);

		free(buffer);
		close(fd);
		return (w_count);
	}
	else
		return (0);
}
