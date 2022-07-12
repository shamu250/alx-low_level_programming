#include "main.h"
/**
 * _isupper - functions that checks for uppercases
 * @c: int type number
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
