#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: absolute path to text file
 * @text_content: string to be written to file.
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	if (filename != NULL)
	{
		int fd, fd1, w_count;

		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			fd1 = creat(filename, 0600);
			if (fd1 == -1)
				return (0);
			if (text_content != NULL)
			{
				w_count = write(fd1, text_content, strlen(text_content));
				if (w_count == -1)
					return (0);
			}
		}
		else
		{
			fd1 = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
			if (fd1 == -1)
				return (0);
			if (text_content != NULL)
			{
				w_count = write(fd1, text_content, strlen(text_content));
				if (w_count == -1)
					return (0);
			}
		}
		close(fd);
		close(fd1);
		return (1);
	}
	else
		return (-1);
}
