#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
void buf(int fd1, int fd2, char **av);
/**
 * main - copy file and other file
 * @ac: pointer file
 * @av: number od letters
 * Return: Return succees or fail
 */
int main(int ac, char **av)
{
	int fd1, fd2, c1, c2;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read to %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fd2 == -1)
	{       dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	buf(fd1, fd2, av);
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1);
		exit(100);
	}
	if (c2 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c2);
		exit(100);
	}
	return (0);
}
/**
 * buf - buffer file read write
 * @fd1: file
 * @fd2: file
 * @av: arguments
 * Return: Return succees or fail
 */
void buf(int fd1, int fd2, char **av)
{
	char buf[1024];
	int MAX_BUF = 1024, r = 0, w;

	while (1)
	{
		r = read(fd1, buf, MAX_BUF);
		if (r == 0)
			break;
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read to %s\n", av[1]);
			exit(98);
		}
		w = write(fd2, buf, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
}
