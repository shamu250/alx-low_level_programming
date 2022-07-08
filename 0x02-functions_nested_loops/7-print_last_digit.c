#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int c)
{
	int cv;

	if (c < 0)
	{
		cv = -1 * (c % 10);
		_putchar(cv + '0');
		return (cv);
	}
	else
	{
		cv = c % 10;
		_putchar(cv + '0');
		return (cv);
	}
}
