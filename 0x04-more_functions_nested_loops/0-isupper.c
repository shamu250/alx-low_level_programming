#include "main.h"
/**
 * _isupper - functions that checks for uppercases
 * @c: int type number
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}
