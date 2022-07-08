#include "main.h"
/**
 * main - print "_putchar" followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char put[] = "_putchar";
	int i = 0;

	while (put[i] != '\0')
	{
		_putchar(put[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
