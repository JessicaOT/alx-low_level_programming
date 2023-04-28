#include "main.h"

/**
 * _isdigit - checks for digits between 0 to 9
 * @c: input number
 * Return: 1 if number is 0 to 9, 0 in other cases
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
