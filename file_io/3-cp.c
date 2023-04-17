#include "main.h"

int
main(int argc, char **argv)
{
	ssize_t fd = 0, from = 0, to = 0, fdto = 0;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	from = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((to = read(fd, buffer, BUFFER_SIZE)))
	{
		if (to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fdto = write(from, buffer, to);
		if (fdto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
		if ((close(fd) == -1))
			dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd), exit(100);
		if ((close(from) == -1))
			dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", from), exit(100);
		return (0);
}
