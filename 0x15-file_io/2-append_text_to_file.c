#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text - function appends text to a file
 * @filename: absolute path to text file
 * @text_content: string to be appended to file.
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename != NULL)
	{
		int fd, w_count;

		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		else
		{
			if (text_content != NULL)
			{
				w_count = write(fd, text_content, strlen(text_content));
				if (w_count == -1)
					return (-1);
			}
		}
		close(fd);
		return (1);
	}
	else
		return (-1);
}
