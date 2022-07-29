#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include if s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *empt;
	unsigned int i, k;

	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	for (i = 0; s1[i] != '\0'; i++)
		;
	ptr = malloc((i + (n * sizeof(*s2) + 1) * sizeof(*ptr)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (k = 0; s2[k] != '\0' && k < n; k++, i++)
		prt[i] = s2[k];
	prt[i] = '\0';
	return (ptr);
}
