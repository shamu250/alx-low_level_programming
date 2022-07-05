#include <stdio.h>

/**
 * main - print if the alphabet in lowercase
 *
 * Description: using main function
 * this program prints "the alphabet in lowercase, folloed by a new line
 * Return: 0
 */
int main(void)
{

	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
