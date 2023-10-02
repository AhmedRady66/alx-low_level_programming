#include "main.h"

/**
 * _strlen - find length of a string
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (*s++)
		len++;
	return (len);
}

/**
 * create_file - creates a file
 * @filename: input
 * @text_content: input
 * Return: 1 success
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t byte = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (len)
		byte = write(fp, text_content, len);
	close(fp);
	return (byte == len ? 1 : -1);
}
