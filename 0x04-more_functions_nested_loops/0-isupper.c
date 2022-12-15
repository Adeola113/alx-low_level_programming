#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: the int of the parameter of my function
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
