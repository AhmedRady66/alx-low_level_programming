#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: first word
 * @s2: second word
 * @n: input
 * Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_le, s2_le;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_le = 0; s1[s1_le] != '\0'; s1_le++)
		;
	for (s2_le = 0; s2[s2_le] != '\0'; s2_le++)
		;
	str = malloc(s1_le + n + 1);
	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
