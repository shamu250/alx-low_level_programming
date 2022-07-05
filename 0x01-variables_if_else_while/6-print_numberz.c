#include <stdio.h>
/**
 * main - print single digit numbers of base 10
 *
 * Description: using the main function
 * this program prints "single digit numbers of base 10 from 0
 * Return: 0
 */
int main(void)
{
char c;
for (c = '0'; c<= '9'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
