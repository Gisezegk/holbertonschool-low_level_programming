#include "main.h"
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wbytes, rbytes;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = (char *) malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}
	rbytes = read(fd, buffer, letters);
	if (rbytes == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	wbytes = write(STDOUT_FILENO, buffer, rbytes);
	if (wbytes == -1 || wbytes != rbytes)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (wbytes);
}
