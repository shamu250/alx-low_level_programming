#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include if s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[index]; index++)
		len++;
	concat = (char *)malloc(sizeof(char) * (len + 1);

	if (concat == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[index]; index++)
		concat[len++] = s1[index]
	for (i = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];
	
	concat[len] = '\0';
	return (concat);
}
