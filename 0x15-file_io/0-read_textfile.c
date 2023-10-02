#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: input file name
 * @letters: input chars
 * Return: bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte;
	int fp;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	byte = read(fp, &buffer[0], letters);
	byte = write(STDOUT_FILENO, &buffer[0], byte);
	close(fp);
	return (byte);
}
