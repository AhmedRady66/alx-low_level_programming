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
 * append_text_to_file - appends text at the end of a file
 * @filename: input
 * @text_content: input
 * Return: 1 success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t byte = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (len)
		byte = write(fp, text_content, len);
	close(fp);
	return (byte == len ? 1 : -1);
}
