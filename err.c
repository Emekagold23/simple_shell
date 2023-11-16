#include "shell.h"

/**
 * eputs - prints an input string to stderr
 * @str: the string to be printed
 *
 * Return: Nothing
 */

void eputs(char *str)

{
	while (*str)
	{
	eputchar(*str++);
	}
}

/**
 * eputchar - writes the character c to stderr
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int eputchar(char c)

{
	return (putfd(c, 2));
}

/**
 * putfd - writes the character c to a given file descriptor
 * @c: The character to print
 * @fd: The file descriptor to write to
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int putfd(char c, int fd)

{
	static int i;
	static char buf[WRITE_BUFFER_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUFFER_SIZE)
	{
	write(fd, buf, i);
	i = 0;
	}
	if (c != BUF_FLUSH)
	{
	buf[i++] = c;
	}
	return (1);
}

/**
 * putsfd - prints an input string to a given file descriptor
 * @str: the string to be printed
 * @fd: the file descriptor to write to
 *
 * Return: the number of characters written
 */

int putsfd(char *str, int fd)

{
	int i = 0;

	while (*str)
	{
	i += putfd(*str++, fd);
	}
	return (i);
}
