#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @sl: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *sl, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (sl == NULL)
		i = 0;
	else
	{
		for (i = 0; sl[i]; i++)
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = sl[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
