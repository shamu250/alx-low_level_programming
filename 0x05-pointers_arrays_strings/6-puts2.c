#include "main.h"

/**
 * puts2 - print one cahr out of 2 of a string
 * @str: char array string type
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
