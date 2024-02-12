#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int len,f, writ;
	char *t;

	t = malloc(letters);
	if (t == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(t);
		return (0);
	}

	len = read(f, t, letters);

	writ = write(STDOUT_FILENO, t, len);

	close(f);

	return (writ);
}